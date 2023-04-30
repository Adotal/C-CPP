#include <iostream>
#include <cstdio>
int main() {
// tu código aquí
      std::cout << "Presiona Intro para continuar...";
      getchar();
      #ifdef _WIN32
 	     system("cls");
	#else
    	     system("clear");
	#endif
     return 0;
} 
