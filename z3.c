#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
int a,b,c,s;
setlocale(LC_CTYPE,"ua");
printf("\n Задайте значення змiннiй Гiпотенуза = ");
	scanf("%d",&c);
printf("\n Задайте значення одному з Катетiв = ");
	scanf("%d",&a );
b = c - a;
s = a+b+c;
if(b<0){printf("\n Результат - Вiд'ємне число... Помилка\n");}
	else{
	printf("\tДругий катет = %2.d\n",b);
    printf("\tПлоща = %d\n",s);}
	return 0;
}
