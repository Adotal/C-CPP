// vida.c

// Juego de la vida: automatas celulares

#include <stdio.h>
#include <stdlib.h>
#include <threads.h>
#include <unistd.h>

// Al menos hoy y mañana
#define NUM_DE_MUNDOS 2
// Tamaño del mundo
#define MAX 32

// Macros requeridas

// Sumar uno sin pasarse de M
#define unoMas(I, M) ((I+1)%M)

// Restar uno sin pasarse de 0
#define unoMenos(I, M) ((M+I-1)%M)

#define futuro(I) ((I+1)%NUM_DE_MUNDOS)
#define pasado(I) ((NUM_DE_MUNDOS+I-1)%NUM_DE_MUNDOS)

// Estados de un elemento
enum ESTADO {
    VIVO = 1,
    MUERTO = 0,
    NUM_DE_ESTADOS = 2
};

// Un mundo es una matris de celulas
typedef struct {

    enum ESTADO situacion[MAX][MAX];

    // Será MAX
    int size;

} t_mundo;

// El universo es un array de mundos, al menos hoy y mañana
typedef struct {

    // Existen dos mundos, hoy y mañana
    t_mundo mundos [NUM_DE_MUNDOS];

    // Índice para el mundo, es 0 o 1
    int hoy;

    // Siempre es 2
    int cuantosMundos;

} t_universo;

// Prototipos de funciones
void iniciarUniverso (t_universo*);
void pintaMundoActual (const t_universo*);
void transicion (t_universo*);
int  cuantosVecinos (
    const int,
    const t_mundo*,
    int,
    int
);

int main(void){

    t_universo universo;
    iniciarUniverso(&universo);

    srand(time(0));
    // Parar con Ctr+C
    while(1) {

        pintaMundoActual(&universo);
        // Espera en milisegundos
        usleep(10000);
        transicion(&universo);

    }

    return 0;
}

// Inicializa la matriz
void iniciarUniverso (t_universo* pUniverso) {

    // Empezamos por 0 y decimos cuantos mundos hay
    pUniverso->hoy = 0;
    pUniverso->cuantosMundos = NUM_DE_MUNDOS;

    // Para todo mundo
    for(int mundo = 0; mundo < pUniverso->cuantosMundos; ++mundo){

        // Inicializa tamaño del mundo
        pUniverso->mundos[mundo].size = MAX;

        // Recorre casillas del mundo e incializa
        for(int fila = 0; fila < pUniverso->mundos[mundo].size; ++fila){
            for(int columna = 0; columna < pUniverso->mundos[mundo].size; ++columna){

                /*
                    // Si con valores aleatorios:
                    
                */ 


                    pUniverso->mundos[mundo].situacion[fila][columna] = 
                    rand() % NUM_DE_ESTADOS;
                // Pero inicia todas las casillas como MUERTO
                //pUniverso->mundos[mundo].situacion[fila][columna] = MUERTO;
            }
        }
    }

    /*
        Partimos de este dibujo en el primer mundo
        X
        XXXX
        X
    

    pUniverso->mundos[0].situacion[MAX/2][MAX/2] =
        VIVO;
    pUniverso->mundos[0].situacion[MAX/2 - 1][MAX/2] =
        VIVO;
    pUniverso->mundos[0].situacion[MAX/2 + 1][MAX/2] =
        VIVO;
    pUniverso->mundos[0].situacion[MAX/2][MAX/2 + 1] =
        VIVO;
    pUniverso->mundos[0].situacion[MAX/2][MAX/2 + 2] =
        VIVO;
    pUniverso->mundos[0].situacion[MAX/2][MAX/2 + 3] =
        VIVO;
        */

}

// Recorre las casillas del mundo actual y pinta X si VIVO, nada si MUERTO
void pintaMundoActual (const t_universo* pUniverso) {

    // Imprime generación actual, como es static no pierde valor y se inicializa en 0
    static long long gen;
    int hoy;
    hoy = pUniverso->hoy;

    printf("\n-%lld-\n", gen++);
    for(int fila = 0; fila < pUniverso->mundos[hoy].size; ++fila){
        for(int columna = 0; columna < pUniverso->mundos[hoy].size; ++columna){

            if(pUniverso->mundos[hoy].situacion[fila][columna] == VIVO)
                printf("X");

            else
                printf(" ");        
        }
        printf("\n");
    }
}

/*
    Calcula la situación del mundo del mañana en función de hoy
    La regla de supervivencia es:
    Si una celda tiene 3 vecinas vivas, vivirá,
    si tiene 2 se queda como está
    y para los demás casos muere
*/

void transicion (t_universo* pUniverso) {

    int hoy, mananya, nuevoEstado;
    // Guardo que dia es hoy y que dia es mañana
    hoy = pUniverso->hoy;
    mananya = futuro(hoy);

    for(int fila = 0; fila < pUniverso->mundos[hoy].size; ++fila){
        for(int columna = 0; columna < pUniverso->mundos[hoy].size; ++columna){

            int cuantos = cuantosVecinos(VIVO, &pUniverso->mundos[hoy], fila, columna);
            
            //printf("%d", cuantos);
            
            // Segun el número de vecinos de la celda
            switch ( cuantos ) {

                case 3:     // Vivirá
                    nuevoEstado = VIVO;
                    break;
                case 2:     // Se mantiene
                    nuevoEstado = pUniverso->mundos[hoy].situacion[fila][columna];
                    break;
                
                default:    // Morirá
                    nuevoEstado = MUERTO;
                    break;            
            }
            // Le asigno a la celda del mañana su nuevo estado
            pUniverso->mundos[mananya].situacion[fila][columna] = (enum ESTADO)nuevoEstado;
        }
    }
    // Mañana se convierte en hoy
    pUniverso->hoy = mananya;
}

/*
    cauntosVecinos
    Calcula y devuelve el número de vecnos de una celda que esta en un estado proporcinado
    Los vecinos de O son X:
    XXX
    XOX
    XXX
*/
int  cuantosVecinos (
    const int estado,
    const t_mundo* pMundo,
    int fila,
    int columna
) {

    
    int cuantos = 0;
    int tam;

    // Normalizo fila y columna para que no se pasen de la talla
    
    tam = pMundo->size;
    fila = fila % tam;
    columna = columna % tam;

    // Cuento estados de los vecinos
    cuantos =
        (pMundo->situacion[unoMas(fila, MAX)][unoMas(columna, MAX)] == estado) +
        (pMundo->situacion[unoMas(fila, MAX)][columna] == estado) +
        (pMundo->situacion[unoMas(fila, MAX)][unoMenos(columna, MAX)] == estado) +
        (pMundo->situacion[fila][unoMas(columna, MAX)] == estado) +
        (pMundo->situacion[fila][unoMenos(columna, MAX)] == estado) +
        (pMundo->situacion[unoMenos(fila, MAX)][unoMas(columna, MAX)] == estado) +
        (pMundo->situacion[unoMenos(fila, MAX)][columna] == estado) +
        (pMundo->situacion[unoMenos(fila, MAX)][unoMenos(columna, MAX)] == estado);

    return cuantos;
}