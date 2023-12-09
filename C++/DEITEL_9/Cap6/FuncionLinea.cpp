// FuncionLinea.cpp
#include <iostream>

using namespace std;

/* Al usar la definición inline se da preferencia
   al compilador para en ves de cargar la función
   en pila, se copia el código de la función
   al sitio donde se llama.
   (Sólo útil en funciones demasiado pequeñas)
*/
inline double cubo(const double lado){
	// const para asegurar no modificar la variable
	return lado * lado * lado;
}

int main(){
	double valorLado = 0;
	cout << "Escribe un valor a sacar su cubo: ";
	cin >> valorLado;
	cout << "Su cubo es " << cubo(valorLado)
		<< endl;
	return 0;
}
