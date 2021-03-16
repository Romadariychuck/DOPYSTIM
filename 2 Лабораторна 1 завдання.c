#include<stdio.h>
#include<math.h>
#include<locale.h>
void main(void) {
	float a,b,r,sa,c;
setlocale (LC_CTYPE,"ua");
printf("\n Перше число a = ");
		scanf("%f",&a);
printf("\n Друге число b = ");
	    scanf("%f",&b);
 r = a-b;
printf("\n\r\tРiзниця чисел = %.2f\n",r);
 sa = (a+b)/2;
printf("\r\tСереднє арифметичне = %.2f\n",sa);
 c = a+b;
printf("\r\tСума чисел = %.2f\n\n",c);
	}
