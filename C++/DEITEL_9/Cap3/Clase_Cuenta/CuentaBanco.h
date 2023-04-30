// CunetaBanco.h
// Clase CuentaBanco

class CuentaBanco {
	public:
		explicit CuentaBanco(int);

		void abonar(int);
		void retirar(int);
		int saldoActual() const;
		void clearsrc() const;		

	private:
		int saldoCuenta; 
};

