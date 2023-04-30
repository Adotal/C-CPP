// Definición de la clase LibroCalificaciones en un archivo
// Este archivo presenta la interfaz sin revelar las implementaciones
// Es decir, sólo hay PROTOTIPOS DE FUNCIONES
#include<string>

class LibroCalificaciones {
	public:
		LibroCalificaciones(std::string, std::string);
		
		void establecerNombreCurso(std::string);
		std::string obtenerNombreCurso() const;

		void setNameInstructor(std::string);
		std::string getNameInstructor() const; 

		void mostrarMensaje() const;
	private:
		std::string nameInstructor;
		std::string nombreCurso;
};

