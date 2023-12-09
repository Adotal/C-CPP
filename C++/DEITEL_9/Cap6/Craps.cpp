// Craps.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Estado {CONTINUE, WIN, LOSE};
void presenta();
unsigned int rollDice();

int main(){

	srand(static_cast<unsigned int>(time(0)));

	Estado stateGame = CONTINUE;
	unsigned int tiro = rollDice();
	int punto=0;

	switch(tiro){
		case 7:
		case 11:
			stateGame = WIN;
		break;

		case 2:
		case 3:
		case 12:
			stateGame = LOSE;
		break;

		default:
			stateGame = CONTINUE;
			punto = tiro;
			cout << "El punto es: " << punto << endl;
		break;
	}
	
	while(CONTINUE == stateGame){
		tiro = rollDice();
		if(7 == tiro){
			stateGame = LOSE;
		} else if(punto == tiro){
			stateGame = WIN;
		}
	}

	if(WIN == stateGame){
		cout << "Felicidades, ha ganado el juego!"
			 << endl;
	} else {
		cout << "Lo lamento, ha perdido el juego"
			 << endl;
	}	

	return 0;
}

void presenta(){
	cout << "\nUn jugador tira dos dados. Cada dado"
		 	"\ntiene seis caras, las cuales contienen"
			"\n1, 2, 3, 4, 5 y 6 puntos negros."
			"\nUna vez que los dados dejan de moverse,"
			"\nse calcula la suma de los puntos negros"
			"\nen las dos caras superiores."
			"\nSi la suma es 7 u 11 en el primer tiro,"
			"\nel jugador gana. Si la suma es 2, 3"
			"\no 12 en el primer tiro"
			"\n(llamado “craps”), el jugador pierde"
			"\n(es decir, la “casa” gana). Si la suma"
			"\nes 4, 5, 6, 8, 9 o 10 en el primer"
			"\ntiro, esta suma se convierte en el "
			"\n“punto” del jugador. Para ganar, el "
			"\njugador debe seguir tirando los dados"
			"\nhasta que salga otra vez “su punto”."
			"\nEl jugador pierde si tira un 7 antes "
			"\nde llegar a su punto." << endl;


}

unsigned int rollDice(){
	int dice1= 1 + rand() % 6;
	int dice2= 1 + rand() % 6;
	int suma = dice1 + dice2;
	cout <<	"Tiro de dados: "
		 << dice1 << " + " << dice2
		 << " = " << suma << endl;
	return suma;
}
