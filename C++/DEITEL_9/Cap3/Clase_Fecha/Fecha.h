// Fecha.h
// Clase Fecha
#include<iostream>

class Fecha {
	public:
		//Constructor
		Fecha(int dayI, int monthI, int yearI){
			setDay(dayI);
			setMonth(monthI);
			setYear(yearI);
		}


		void showDate() const {
			std::cout << "\n"
			          << getDay() << " / "
			          << getMonth() << " / "
				  << getYear() << std::endl;
			
		}

		
		void setDay(int dayI){
			day = dayI;  
		}
		void setMonth(int monthI){
			month = monthI>=1 && monthI<=12  ? monthI:1;  
		}
		void setYear(int yearI){
			year = yearI>=1900 && yearI<=2023  ? yearI:1;  
		}

		int getDay() const{
			return day;
		}
		int getMonth() const{
			return month;
		}
		int getYear() const{
			return year;
		}
		
		


	private:
		int day, month, year;
};
