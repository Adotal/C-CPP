// GrowFac.cpp
#include<iostream>
using namespace std;
// Class definition and implementation

class GrowFac{
	public:
		explicit GrowFac()
		: users(1000), cyear(2012), cmonth(10), tasa(10)
		{}

	void presenta() const{
		cout << "\nAl mes de enero de 2013, hay "
				"\naproximadamente 2 500 millones de"
				"\npersonas en Internet. Facebook llegó a"
				"\nlos mil millones de usuarios en octubre"
				"\nde 2012."
				"\n¿Cuándo llegará a los 2.5 mil millones" 
				"\ncon tasas de crecimiento mensuales del"
				"\n2, 3, 4 o 5%?"
			<< endl;
	}

	void setTasa(double tasa1){
		tasa = tasa1;
	}
	
	double getTasa() const{
		return tasa;
	} 

	double getUsers() const{
		return users;
	}

	void calcularTime(){
		int year=1;
		while(users <= 2500){
			users *= (1 + tasa);
			++cmonth;
		}
	}

	void monthsYears(){
		while(cmonth >= 12){
			cmonth -= 12;
			++cyear;
		}
	}

	void calcule(){
		double tasa1=0;
		cout << "\n¿Cuál sera la tasa elegida?"
				"(1, 2, 3, 4, 5): ";
		cin >> tasa1;
		
		setTasa(tasa1 / 100.00);
		calcularTime();
		monthsYears();		

	}

	void printResult() const{
		cout << "\nEn el mes " << cmonth << " del año "
			 << cyear <<
				"\nFacebook alcanzará una cantidad"
				"\nde " << int(getUsers()) << " usuarios.";
	}


	private:
		double users;
		int cyear;
		int cmonth;
		double tasa;

};

