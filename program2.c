#include <stdio.h>

int mnoz(int a, int b)
{	return a * b;  }

int dodaj(int a, int b)
{	return a + b;  }


int main(void) /* oznacza ze nie mamy zadnych parametrow */
	       /* mozemy zostawic puste w nawiasach lub void */
{
	int a = 2, b = 5;  /* deklaracj wraz z inicjalizacja */
	char wybor = '*';
	/*if(wyrazenie) {blok jesli wyrazenie prawdziwe}
	else {blok jesli wyrazenie falszywe};	*/

	if(wybor == '*') {
		printf("Wynik mnozenia: %i\n", mnoz(a, b));
	}else{
		printf("Wynik dodawania: %i\n", dodaj(a, b));
	};   /* srednik jest opcjonalny jesli wystepuje klamra*/

	     /* %i wstawia wynik, \n opuszcza o linię niżej */

	return 0;

}