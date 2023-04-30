// Factura.h
#include<string>

class Factura {
	public:
	//Constructor
	Factura(std::string numPiezaP, std::string descPiezaP, int numArticulosP, int precioP){

		numPieza = numPiezaP;
		descPieza = descPiezaP;
		numArticulos = numArticulosP;
		if(precioP>=0){
			precio = precioP;
		}else{
			precio = 0;
		}

	}

	void setnumPieza(std::string num){
		numPieza = num;
	}
	void setdescPieza(std::string num){
		descPieza = num;
	}
	void setnumArticulos(int num){
		numArticulos = num;
	}
	void setprecio(int num){
		precio = num;
	}

	std::string getnumPieza() const{
		return numPieza;
	}
	std::string getdescPieza() const{
		return descPieza;
	}
	int getnumArticulos() const{
		return numArticulos;
	}
	int getprecio() const{
		return precio;
	}
	int obtenerMonto(){
		int monto = numArticulos*precio;
		if(monto>=0){
			return monto;
		}else{
			monto=0;
			return monto;
		}

	}
	

	private:

	std::string numPieza;
	std::string descPieza;
	int numArticulos;
	int precio;
};
