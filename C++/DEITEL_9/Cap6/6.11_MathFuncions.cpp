// 6.11_MathFuncions.cpp
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main(){

	cout << "\na) x = fabs( 7.5 )  = " << fabs(7.5) 
		 << "\nb) x = floor( 7.5 ) = " << floor(7.5) 
		 << "\nc) x = fabs( 0.0 )  = "<< fabs(0.0)
		 << "\nd) x = ceil( 0.0 )  = "<< ceil(0.0) 
		 << "\ne) x = fabs( -6.4 ) = " << fabs(-6.4)
		 << "\nf) x = ceil( -6.4 ) = " << ceil(-6.4)
		 << "\ng) x = ceil( -fabs( -8 + floor( -5.5 ) ) ) = "
		 << ceil( -fabs( -8 + floor(-5.5))) << endl;
	return 0;
}
