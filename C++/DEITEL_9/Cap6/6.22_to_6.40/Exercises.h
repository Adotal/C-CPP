// Exercises.h
// Exercises from 6.22 to 6.55 

class Exercises{
	public:
		void printMenu();
		void selector(int);
		void squareDefault(int);	// 6.22
		void squareFilled(int, char); // 6.23
		int segundos2Tiempos(int); // 6.25
		// 6.26
		int centigrados(int);
		int fahrenheit(int);
		// 6.27
		double minimo3Double(double, double, double);
		bool esPerfecto(unsigned int);	// 6.28
		bool esPrimo(unsigned int);	// 6.29
		// 6.30
		unsigned int digitosInverso(unsigned int);
		int mcd(int, int); // 6.31
		int calidad4(int); // 6.32
		int tirarMoneda(); // 6.33
		int numeroAdivinar(); // 6.34 & 6.25
		double potencia(double, int); //6.36
		void fibonacci(int nterminos);//6.37
		void torresHanoi(int, int, int, int); // 6.38
		void torresHanoiIterativa(int); // 6.39
		int factorialRecursivoVisual(unsigned int, int*); // 6.40
		int mcdRec(int, int);	// 6.41
		double distancia2Puntos(double, double, double, double); // 6.42
		// The line 13 "cout << c" is never executed // 6.43
		// The program makes the x*y product // 6.44
		int productoRecursivo(int, int); // 6.45
		void funcionesMat();			// 6.46
		bool craps();					// 6.47
		unsigned int crapsRollDice();
		inline double areaCirculo(double);	// 6.48
	private:

};
