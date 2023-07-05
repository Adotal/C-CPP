// Examen.h

// Definición de clase

class Examen {
	public:
	// Constructor
	explicit Examen();

	// Prototipos de funciones
	void correctAns();
	void cuestionario();
	int  getResult() const;
	void printResult() const;

	private:
		int calif;
	
};

