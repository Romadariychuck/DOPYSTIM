#include <stdio.h>
#include <math.h>
#include <locale.h>
int main( ) {
float a, b, c, V, Sp ; 
setlocale (LC_CTYPE, "ua");
printf ("\n ������� ����� ������� a = ");
scanf ("%f", &a ); 
printf("\n ������� ����� ������� b = ");
scanf ("%f", &b );
printf("\n ������� ������ ������� c = ");
scanf("%f", &c );
V=a*b*c;
Sp = 2*(a*b+ b*c+ a*c);
printf("\n V \t Sp \n"); printf("%.0f \t%.0f\n", V, Sp);
return 0;
} 
