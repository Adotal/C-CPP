// Empleado.h
// Clase empleado
#include<iostream>
#include<string>

class Empleado {
	public:
		//Constructor
		Empleado(std::string name, std::string lastname, int salarioM){
			setNombre(name);
			setApellido(lastname);
			setSalarioMensual(salarioM);
		}


		void fichaEmpleado() const {
			std::cout << "\n"
			"Nombre:            \t" << getNombre() << "\n"
			"Apellido:          \t" << getApellido() << "\n"
			"Salario Mensual($):\t" << getSalarioMensual() << "\n"
		        "Salario Anual($):  \t"	<< getSalarioMensual()*12 << "\n" <<std::endl;
			
		}

		void setNombre(std::string name){
			nombre = name;
		}
		void setApellido(std::string lastname){
			apellido = lastname;
		}
		void setSalarioMensual(int salarioM){
			salarioMensual = salarioM>0 ? salarioM:0;  
		}

		std::string getNombre() const{
			return nombre;
		}
		std::string getApellido() const{
			return apellido;
		}
		int getSalarioMensual() const{
			return salarioMensual;
		}
		
		


	private:
		std::string nombre;
		std::string apellido;
		int salarioMensual;
};
