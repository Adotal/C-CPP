// Interfaz de CuentaBanco
#include<iostream>
#include"CuentaBanco.h"
#include<cstdio>
using namespace std;

int main(){
   int opt, saldo;
   char c;
   CuentaBanco miCuenta1(0);
   CuentaBanco miCuenta2(0);

//   do{
   cout << "1. Saldo Actual.\n"
	   "2. Abonar.\n"
	   "3. Retirar.\n" << endl;
   cin >> opt;

   if(opt==1){
	   cout << "El saldo actual es de $" << miCuenta1.saldoActual() << endl;
   
   }else if (opt == 2){
	   cout << "Escribe la cantidad para abonar: ";
	   cin >> saldo;
	   miCuenta1.abonar(saldo);
   
   }else if (opt == 3){
	   cout << "Escribe la cantidad para retirar: ";
	   cin >> saldo;
	   miCuenta1.retirar(saldo);
  }
   cout << "\nPresione una tecla para continuar...";
   getchar();
   system("clear");
 
   

//   }while(opt != -1);

   return 0;
}
