#include <stdio.h>
#include <math.h>
 
int main()
{
float a,b,c,delta;
printf("podaj wspolczynnik a: ");
scanf("%f",&a);
printf("podaj wspolczynnik b: ");
scanf("%f",&b);
printf("podaj wspolczynnik c: ");
scanf("%f",&c);
delta =(b*b)-(4*a*c);
if
    (a=0)
    {
    printf("Jest to funkcja liniowa!");
    }
else
    {
 
    if
        (delta>0)
        {
        printf("X1 wynosi: %2f",(-b-delta)/(2*a));
        printf("X2 wynosi: %2f/n",(-b+delta)/(2*a));
        }
    else    
    {
 
        if
            (delta = 0)
            {
            printf("Funkcja ma jedno rozwiazanie rowne X: %2f/n",-b/(2*a));
            }
        else
            {
            if
            (delta < 0)
            {
            printf("Funkcja kwadratowa nie ma rozwiazan!");
            }}}}}
