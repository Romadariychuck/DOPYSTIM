#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void) 
{
setlocale(LC_CTYPE,"ua");
int x,y,z;
	float a;
	point:
       printf("\n Введiть x =  ");
    scanf("%d",&x);
       printf("\n Введiть y =  ");
    scanf("%d",&y);
       printf("\n Введiть z =  ");
    scanf("%d",&z);
	if (y<0 || z<0 || x<0){
printf("\t\nПомилка, не можна вводити вiд'ємнi числа...\n");
        goto point;}
a =(sqrt(x)+2*sqrt(y*z))/(sqrt(y)-2*sqrt(x*z));
	 printf("\n Вiдповiдь a = %2.f\n",a);
  return 0;
}
