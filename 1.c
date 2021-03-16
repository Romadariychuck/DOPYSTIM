#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void) {
int a,b,sy,fc,d; 
setlocale (LC_CTYPE,"ua");
printf("\n Перше число a = ");
		scanf("%d",&a);
printf("\n Друге число b = ");
	    scanf("%d",&b);
sy=a+b;
printf("\n\r\tСума чисел = %d\n",sy);
fc=(a/b);
printf("\n\r\tЦiла частина вiд дiлення 1 на 2 = %d\n",fc);
d=(a+b)*3;
printf("\n\r\tПотроєний добуток = %d\n\n",d);
	
	return 0;
}
