// FrecuenciaCardiaca.h
// Definición de clase y funciones de Frec.Cardiaca
#include<iostream>
#include<string>

class FrecuenciaCardiaca{
	
	public:	
		FrecuenciaCardiaca(std::string name, std::string lastname, int bornDay,
				   int bornMonth, int bornYear, int day, int month, int year){
			setName(name);
			setLastName(lastname);
			setBornDay(bornDay);
			setBornMonth(bornMonth);
			setBornYear(bornYear);
			setDay(day);
			setMonth(month);
			setYear(year);

		}
			// set Functions

		void setName(std::string name){
			nombre = name;
		}
		void setLastName(std::string lastname){
			apellido = lastname;
		}

		void setBornDay(int dayB){
			b_day = dayB;  
		}
		void setBornMonth(int monthB){
			b_month = monthB>=1 && monthB<=12  ? monthB:1;  
		}
		void setBornYear(int yearB){
			b_year = yearB>=1900 && yearB<=2023  ? yearB:1;  
		}

		void setDay(int dayI){
			Tday = dayI;  
		}
		void setMonth(int monthI){
			Tmonth = monthI>=1 && monthI<=12  ? monthI:1;  
		}
		void setYear(int yearI){
			Tyear = yearI>=1900 && yearI<=2023  ? yearI:1;  
		}
		
		// get Functions

		std::string getName() const{
			return nombre;
		}
		std::string getLastName() const{
			return apellido;
		}
		int getBornDay() const{
			return b_day;
		}
		int getBornMonth() const{
			return b_month;
		}
		int getBornYear() const{
			return b_year;
		}

		int getDay() const{
			return Tday;
		}
		int getMonth() const{
			return Tmonth;
		}
		int getYear() const{
			return Tyear;
		}
		
		int getAge() const{
			int edad = getYear() - getBornYear();
			if(getBornMonth() > getMonth()){
				edad--;
			}else if(getBornMonth() == getMonth()){
				if(getBornDay() > getDay()) edad--;
				else if(getBornDay() == getDay()) std::cout << "Feliz cumpleaños! ";
			
			}
			return edad;
		}
		int getMaxFrec() const{
			int maxFrec = 220 - getAge();
			return maxFrec;
		
		}
		int getNormalFrec() const{
			int normalFrec = getMaxFrec()*.62;
			return normalFrec;
		}

		// showDate Function
	
		void showBornDate() const {
			std::cout << "Fecha de nacimiento:\t"
			          << getBornDay() << "/"
			          << getBornMonth() << "/"
				  << getBornYear() << ".";
			
		}

		void showDate() const {
			std::cout << "Hoy es:\t"
			          << getDay() << "/"
			          << getMonth() << "/"
				  << getYear() << ".";
			
		}

		// Ficha de frecuencia cárdiaca:


	private:
		std::string nombre;
		std::string apellido;
		int b_day, b_month, b_year;
		int Tday, Tmonth, Tyear;
};
