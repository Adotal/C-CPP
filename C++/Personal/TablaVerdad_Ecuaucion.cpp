// main.cpp

// Made by Adotal
#include <iostream>
#include <cstring>
using namespace std;

int main(){

    setlocale(LC_ALL, "");
    
    int bin[4] = {0,0,0,0};
    char ecuation[50] = "";
    int valor;
    int power;
    bool result;
    bool producto;

    cout << "TABLA DE VERDAD SEGÚN ECUACIÓN (4 BITS)" << endl
         << "Para escribir la ecuación, toma en cuenta:\n"
         << "A = A\nB = B\nC = C\nA' = a\nB' = b\nC' = c\n+ = +\n"
         << "Es decir para escribir: ABC + A'B'C'\n"
         << "se escribe:             ABC + abc\n" << endl
         << "Introduce tu ecuación: ";
    cin.getline(ecuation, 50);

    cout << "\n N\tABCD\tX\n" << endl;

    // Itera para 4 bits:
    for(int i = 0; i < 16; ++i){
        cout << " " << i << "\t";
        valor = i;

        // Convierte 0-15 de DEC a BIN:
        for(int j = 3; j >= 0; --j){            
            bin[j] = valor % 2;
            valor /= 2;
        }
        
        // Imrpime tabla verdad:
        for(int j = 0; j < 4; ++j)
            cout << bin[j];
             
        // Calcula resultado de ecuación:
        // A = bin[0]
        // B = bin[1]
        // C = bin[2]
        // D = bin[3]
        producto = 1;
        for(int j = 0; j < strlen(ecuation); ++j){
            switch(ecuation[j]){
                case 'A': producto *= bin[0];
                break;
                case 'B': producto *= bin[1];
                break;
                case 'C': producto *= bin[2];
                break;
                case 'D': producto *= bin[3];
                break;
                case 'a': producto *= !bin[0];
                break;
                case 'b': producto *= !bin[1];
                break;
                case 'c': producto *= !bin[2];
                break;
                case 'd': producto *= !bin[3];
                break;
                default:
                break;
            }
            switch(ecuation[j+1]){
                case '+':
                case '\n':
                case '\0':
                    result += producto;
                break;
            }
            if('+' == ecuation[j+1])
                producto = 1;
        }        


        cout << '\t' << result << endl;
        result = 0;
    }

    system("pause");
    return 0;
}
