// Definiciones de la funciones
#include<iostream>
#include"CuentaBanco.h"
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

// Constructor
CuentaBanco::CuentaBanco(int saldoInicial){
	if(saldoInicial >= 0){
		saldoCuenta = saldoInicial;	
	} else {
		cerr << "No es posible inciar una cuenta endeudada,\n"
			"Se ha establecido el saldo inicial a 0.\n" << endl;
		saldoCuenta = 0;
	
	}
}

// Abonar
void CuentaBanco::abonar(int saldoAbonar){
	if(saldoAbonar<=0){
		cerr << "Error, no es posible abonar saldo negativo o nulo,\n"
		        "no se han realizado cambios.\n" << endl;
	}else{
		saldoCuenta += saldoAbonar;
		cout << "Operación completada con éxito,\n"
		        "se han abonado $"<< saldoAbonar <<" a la cuenta.\n" << endl;
	}
}

// Retirar
void CuentaBanco::retirar(int saldoRetirar){
	if(saldoRetirar > saldoCuenta){
		cerr << "El monto a cargar excede el saldo de la cuenta,\n"
		        "no se han realizado cambios.\n" << endl;
	}else if(saldoRetirar > 0){
		saldoCuenta -= saldoRetirar;
		cout << "Operación completada con éxito,\n"
		        "se han retirado $"<< saldoRetirar <<".\n" << endl;
	} else {
		cerr << "Error, no es posible retirar saldo negativo o nulo,\n"
		        "no se han realizado cambios.\n" << endl;
	}
}

// Estado actual
int CuentaBanco::saldoActual() const{
	return saldoCuenta;
}

// Limpiar pantalla (clearscreen)

void CuentaBanco::clearsrc() const{
	system("clear");
}
