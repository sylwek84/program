#include <stdio.h>

int mnoz(int a, int b) { printf("Wynik mnozenia: %i\n", a * b); return a * b; }
int dodaj(int a, int b)  { printf("Wynik dodawania: %i\n", a + b); 
return a + b; }
int odejmij(int a, int b) { printf("Wynik odejmowania: %i\n", a - b);
return a - b; }
int dziel(int a, int b) { printf("Wynik dzielenia: %i i reszta: %i\n", a / b, 
a % b); return a / b;}

int main()
{	int a, b;  
	char wybor;

	printf("Podaj wartosc argumentu a: "); scanf("%i", &a); 
	printf("Podaj wartosc argumentu b: "); scanf("%i", &b); 
	printf("Podaj dzialanie: "); scanf("%c", &wybor); 

	scanf("%c", &wybor);

	if(wybor == '*') 
	{ mnoz(a, b); }

	else if(wybor == '/')
	{ dziel(a, b);  }

	else if(wybor == '+')
	{ dodaj(a, b);  }

	else if(wybor == '-')
	{ odejmij(a, b);  };

	return 0;

}
