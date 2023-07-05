// FairTax.h

// Class definition
class FairTax{
	public:
		// Constructor
		explicit FairTax();

		// Functions definition
		void presenta() const;
		double getTax() const;
		void plusTax(double);
		void recopilar();
		void calcular();
		void printTax() const;

	private:
		double tax;
};
