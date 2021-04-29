#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
setlocale(LC_CTYPE,"ua");
int x,y,b;
float a;
printf("\n\t Задайте x = ");
scanf("%d", &x);
printf("\n\t Задайте y = ");
scanf("%d", &y);
printf("\n\t Задайте b = ");
scanf("%d", &b);
	if(b<0)a =(float) b+sqrt(x-4*y);
	else if(b>7)a =(float)(b*y)/(2*y-3*x)-4;
    if(b==0)a =(float) b*b-2*x*y+(4)/(b*b-x*y);
printf("\n\t a = %.2f\n\n",a);
	return 0;
}
