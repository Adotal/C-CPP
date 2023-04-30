// La clase LibroCalificaciones contiene un miembro
// de datos nombreCurso y funciones para establecer
// y obtener su valor
#include<iostream>
#include<string>
using namespace std;

class LibroCalificaciones {
	public:
		void establecerNombreCurso(string nombre){
			nombreCurso = nombre;
		}
		string obtenerNombreCurso() const {
			return nombreCurso;
		}
		void mostrarMensaje() const{
			cout << "Bienvenido al libro de calificaciones "
			     << "para\n" << obtenerNombreCurso() << "!"
			     << endl;
		}
	private:
		string nombreCurso="NULL";
};

int main(){
	string nombreDelCurso;
	LibroCalificaciones miLibC;

	cout << "El nombre inicial del curso es: "<< miLibC.obtenerNombreCurso()
	     << endl;

	cout << "\nEscriba el nombre del curso:" << endl;
	getline(cin, nombreDelCurso);

	miLibC.establecerNombreCurso(nombreDelCurso);
	cout << endl;

	miLibC.mostrarMensaje();

	cout << "****"<<miLibC.obtenerNombreCurso() <<"*****" << endl;
	return 0;
}
