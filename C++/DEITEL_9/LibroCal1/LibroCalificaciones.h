// Definición de la clase LibroCalificaciones en un archivo
// Este archivo presenta la interfaz sin revelar las implementaciones
// Es decir, sólo hay PROTOTIPOS DE FUNCIONES
#include<string>

class LibroCalificaciones {
	public:
		explicit LibroCalificaciones(std::string);
		
		void establecerNombreCurso(std::string);
		std::string obtenerNombreCurso() const; 
		void mostrarMensaje() const;
		void recibirCalificaciones();
		void mostrarReporte() const;
		int maximo(int, int, int) const;
	private:
		std::string nombreCurso;
		int califMax;
};

