#include <iostream>

using namespace std;

int main(){
	char cad[40], paren[20];
	int i = 0, j = 0;
	bool status = true;

	cout << "Identificar parentesis correctos\n";
	while(1){
		status = true;
		j = -1;
		cout << "Introduce una cadena: "; 
		cin.getline(cad, 40);

		//if(cad[0] == EOF) break;

		for(i = 0; cad[i] != '\0' && true == status; ++i){
			if('(' == cad[i] || '[' == cad[i] || '{' == cad[i]){
				++j;
				paren[j] = cad[i];
			} else if(')' == cad[i]){
				if('(' == paren[j]){
					paren[j] = 0;
					--j;
				} else {
					status = false;
				}
			} else if(']' == cad[i]){
				if('[' == paren[j]){
					paren[j] = 0;
					--j;
				} else {
					status = false;
				}
			
			} else if('}' == cad[i]){
				if('{' == paren[j]){
					paren[j] = 0;
					--j;
				} else {
					status = false;
				}
			}
		}
		if(j != -1) status = false;

		if(true == status) cout << "Correcto";
		else cout << "Incorrecto";
		cout << endl << endl;
	}
	return 0;
}
