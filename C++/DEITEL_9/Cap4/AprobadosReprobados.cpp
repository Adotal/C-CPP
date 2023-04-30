// Problema de diez estudiantes y sus calificaciones
#include<iostream>
using namespace std;

int main(){
    unsigned int aprobados=0,
	reprobados=0,
   	alumno=1,
	calif = 0;

    while(alumno <= 10 ){

		int centinela = 0;

		while(centinela != 1){
				cout << "Proporciona una calificación ["
				 	 << alumno << "] (1:Aprobado)(2:Reprobado) ";
			cin >> calif;
			
			if(calif == 1){
				aprobados++;
				centinela = 1;
			} else if(calif == 2){
				reprobados++;
				centinela = 1;
			}
		}
	    alumno++;
    }

    cout << "Resumen de evaluación:\n"
	    "Aprobados: " << aprobados << "\n"
	    "Reprobados: "<< reprobados << "\n" << endl;
    if(aprobados > 8){
	    cout << "Bono para el instructor!" << endl;
    }


    return 0;
}
