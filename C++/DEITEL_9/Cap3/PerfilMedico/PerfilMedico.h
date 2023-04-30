// PerfilMedico.h
// Definión de la clase y métodos 
#include<iostream>
#include<string>

class PerfilMedico{
	public:
		PerfilMedico(std::string name, std::string lastname, std::string sex, int bornDay,
			     int bornMonth, int bornYear, int day, int month, int year,
			     float tall, int weight){
				setName(name);
				setLastName(lastname);
				setSex(sex);
				setBornDay(bornDay);
				setBornMonth(bornMonth);
				setBornYear(bornYear);
				setDay(day);
				setMonth(month);
				setYear(year);
				setTall(tall);
				setWeight(weight);
		}
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
		void setSex(std::string sex){
			sexo = sex;
		}
		void setTall(int tall){
			altura = tall;
		}
		void setWeight(int weight){
			peso = weight;
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

		std::string getSex() const{
			return sexo;
		}
		float getTall() const{
			return altura;
		}
		int getWeight() const{
			return peso;
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

		// BMI IMC, Function:
		void getIMC(){
			std::cout << "*\t\t\t\t\t\t*\n"
				"* Indice de masa corporal: " << peso/((altura/100)*(altura/100))
				<< "\t\t*"
			       	<< "\n*\t\t\t\t\t\t*\n*"
				" IMC - BMI:*\t\t\t\t\t*\n"
				"* Bajo peso:\tmenos de 18.5\t\t\t*\n"
				"* Normal:\tentre 18.5 y 24.9\t\t*\n"
				"* Sobrepeso:\tentre 25 y 29.9\t\t\t*\n"
				"* Obeso:\t30 o más\t\t\t*\n";
		}

	private:
		std::string nombre;
		std::string apellido;
		std::string sexo;
		int b_day, b_month, b_year;
		int Tday, Tmonth, Tyear;
		int peso;
		float altura;

};
