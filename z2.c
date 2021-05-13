#include <math.h>
#include <locale.h>
#include <stdio.h>
int main(void){
int x,y;
setlocale(LC_CTYPE, "ua");
printf("\n Задайте x = ");
	scanf("%d",&x);
if(x<0){printf("Ви ввели вiд'ємне число...Спробуйте ще раз\n");} 
else {y = (pow(x,4))/(sqrt(fabs(x-10))-pow(x,2));
	printf("\n Вiдповiдь = %2.d\n", y);}
return 0;
}
