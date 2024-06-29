// Methods.cpp

#include <iostream>
#include <cmath>
#include "Methods.h"

void Methods::setEcuacion(){
	for(unsigned int i = 0; i < 3; ++i){
		std::cin >> vector[i];
	}
}

void Methods::TCP(){
	for(int i = 2; i >= 0; --i){
		vector[i] /= vector[0];
	}
	vector[2] *= -1;
	vector[1] /= -2;
	vector[2] += vector[1] * vector[1];
	imaginario = (vector[2] < 0);
	if(imaginario){
		vector[2] *= -1;
	}
	vector[2] = std::sqrt(vector[2]);
	printEcuacion();
}

void Methods::printEcuacion(){
	std::cout << "x = " << vector[1] << " ± "
			  << vector[2] << (imaginario) ? "i":" ";
}
