// Metodos.cpp
// Class implementation

#include "Metodos.h"
#include <iostream>

void Metodos::getSystem(){
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 4; ++j){
			std::cin >> matriz1[i][j];
		}
	}
}

void Metodos::Montante(){	
	PA = 1;
	printSystem();

	for(int k = 0; k < 3; ++k){		// Calcular cada nuevo elemento hasta matriz pseudo-identidad
		for(int i = 0; i < 3 ; ++i){
			if(i != k){
				for(int j = 0; j < 4; ++j ){
					if(j != k){
						matriz1[i][j] = (matriz1[i][j] * matriz1[k][k] 
								- matriz1[i][k] * matriz1[k][j]) / PA;  
					}
				}
			}
		}
	
	for(int i = 0; i < 3; ++i){		// Agregar 0's
		if(i != k) matriz1[i][k] = 0;
	}
	PA = matriz1[k][k];		// Nuevo pivote anterior.
	printSystem();
	}

	for(int i = 0; i < 3; ++i){		// Divide entre PA para matriz identidad
		for(int j = 0; j < 4; ++j){
			if(matriz1[i][j] != 0) matriz1[i][j] /= PA;
		}
	}

	printSystem();

}

void Metodos::printSystem(){
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 4; ++j){
			std::cout << matriz1[i][j] << '\t';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}


