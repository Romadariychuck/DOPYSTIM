#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void) {
	int a,b,r,sa,c;
setlocale (LC_CTYPE,"ua");
printf("\n Перше число a = ");
		scanf("%d",&a);
printf("\n Друге число b = ");
	    scanf("%d",&b);
 r = a-b;
printf("\n\r\t Різниця чисел = %d\n",r);
 sa = (a+b)/2;
printf("\r\t Середнє арифметичне = %d\n",sa);
 c = a+b;
printf("\r\t Сума чисел = %d\n\n",c);
	return 0;
	}
