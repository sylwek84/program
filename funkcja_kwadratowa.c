#include <stdio.h>
#include <math.h>



int main()

{
	puts("Kalkulator równań kwadratowych o rownaniu y=ax^2 + bx + c");
	float a,b,c,delta,pdelta;
	printf("Podaj wartość argumentu a: "); scanf("%f", &a);
	printf("Podaj wartość argumentu b: "); scanf("%f", &b);
	printf("Podaj wartość argumentu c: "); scanf("%f", &c);
	delta=(b*b)-(4*a*c);
	if(a==0){puts("Jesli a=0 to rownanie jest liniowe!");}
	else{
	if(delta>0){
		pdelta=sqrt(delta);
		printf("Pierwiastkami tego rownania sa: x1=%.2f x2=%.2f\n", (-b-pdelta)/(2*a),(-b+pdelta)/(2*a));}
		else if(delta==0){printf("Pierwiastkiem tego rozwiazania jest: x=%.2f\n", -b/(2*a));}
		else if(delta<0){printf("Równanie nie ma rozwiązań!\n");}
	}
return 0;

}
