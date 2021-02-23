#include <stdio.h>
#include <math.h>
#include <locale.h>
int main( ) {
float a, b, c, V, Sp ; 
setlocale (LC_CTYPE, "ua");
printf ("\n довжина першої сторони a = ");
scanf ("%f", &a ); 
printf("\n довжина другої сторони b = ");
scanf ("%f", &b );
printf("\n довжина третьої сторони c = ");
scanf("%f", &c );
V=a*b*c;
Sp = 2*(a*b+ b*c+ a*c);
printf("\n V \t Sp \n"); printf("%.0f \t%.0f\n", V, Sp);
return 0;
} 
