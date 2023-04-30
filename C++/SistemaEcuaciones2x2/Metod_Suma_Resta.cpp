#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a1=0, b1=0, c1=0, a2=0, b2=0, c2=0, m=0, n=0, y=0, x=0;
    int sistema=1;
    // 1 consistente
    // 2 inconsistente
    // 3 dependiente

    cout << "Resolver sistema de ecuaciones de la forma:\n"
            "ax + by = c\n"
            "dx + ey = f\n"
            "Método: Suma y Resta" << endl;
    cout << "Proporciona los coeficientes: " << endl;
    cout << "a = "; cin >> a1;
    cout << "b = "; cin >> b1;
    cout << "c = "; cin >> c1;
    cout << "d = "; cin >> a2;
    cout << "e = "; cin >> b2;
    cout << "f = "; cin >> c2;

    if(a1 / a2 == b1 / b2){
        if(c1 / b1 == c2 / b2)
            sistema = 3;
        else 
            sistema = 2;
    }

    if(sistema == 1){
        b1 *= a2;
        c1 *= a2;
        b2 *= a1;
        c2 *= a1;

        if (a1 > 0 && a2 > 0 || a1 < 0 && a2 < 0) {
            m = b1 - b2;
            n = c1 - c2;
        } else {
            m = b1 + b2;
            n = c1 + c2;
        }

        y = n / m;
        b1 /= a2;
        c1 /= a2;
        x = (c1 - b1*y) / (a1);

        cout <<  fixed << setprecision(6)
            << "\nResultados:\n"
                "x = " << x << "\n"
                "y = " << y << endl;
    } else if(sistema == 2){
        cout << "\nEl sistema es inconsistente,\n"
                "por lo tanto NO tiene solución." << endl;
    } else {
        cout << "\nEl sistema es dependiente\n,"
                "por lo tanto tiene INFINITAS soluciones." << endl;

    }

    return 0;
}