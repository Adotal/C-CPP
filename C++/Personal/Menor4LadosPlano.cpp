#include <iostream>
#include <cmath>
using namespace std;
int main() {

  double lados[4];
  double puntos[2][4];
  unsigned int i=0, j=0;

  for(i=0; i < 4; ++i){
    for(j=0; j < 2; ++j){
      cin >> puntos[j][i];
    }
  }

  for(i = 0; i < 4; ++i){
	if(i != 3)
		lados[i] = sqrt(pow(puntos[0][i] - puntos[0][i+1], 2) +
		pow(puntos[1][i] - puntos[1][i+1], 2));
	else
		lados[i] = sqrt(pow(puntos[0][i] - puntos[0][0], 2) +
		pow(puntos[1][i] - puntos[1][0], 2));
  }

  for(i = 0, j = 0; i < 4; ++i){
	  if(lados[i] < lados[j]) j = i;
  }

  cout << lados[j];
  
  return 0;
}
