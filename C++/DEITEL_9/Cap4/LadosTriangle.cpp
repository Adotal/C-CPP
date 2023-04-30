#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	double A, B, C;

	cout << "Proporciona las longitudes de un triángulo: ";
	cin >> A >> B >> C;

	cout << fixed;

	if(B+C > A)
		if(A+C > B)
			if(A+B > C)
				cout << "Sí es posible formar un triánulo con las longitudes de: "
					 << A <<", "<< B <<", "<< C << endl;
			else cout << "No es posible formar un triángulo con"
	   				     "las longitudes proporcionadas" << endl;
		else cout << "No es posible formar un triángulo con"
	   			     "las longitudes proporcionadas" << endl;
	else  cout << "No es posible formar un triángulo con"
	       		  "las longitudes proporcionadas" << endl;
	

	unsigned int a, b, c;

	cout << "Proporciona las longitudes de un triángulo: ";
	cin >> a >> b >> c;

	if(b+c > a)
		if(a+c > b)
			if(a+b > c)
				cout << "Sí es posible formar un triánulo con las longitudes de: "
					 << a <<", "<< b <<", "<< c << endl;
			else cout << "No es posible formar un triángulo con"
	   				     "las longitudes proporcionadas" << endl;
		else cout << "No es posible formar un triángulo con"
	   			     "las longitudes proporcionadas" << endl;
	else  cout << "No es posible formar un triángulo con"
	       		  "las longitudes proporcionadas" << endl;
	



	return 0;
}
