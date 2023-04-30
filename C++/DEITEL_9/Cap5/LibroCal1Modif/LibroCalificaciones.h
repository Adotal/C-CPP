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
		double determinarPromedio() const;
		void recibirCalificaciones();
		void mostrarReporte() const;

	private:
		std::string nombreCurso;
		int aCount;
		int bCount;
		int cCount;
		int dCount;
		int eCount;
		int fCount;
};

