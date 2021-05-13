#include <math.h>
#include <locale.h>
#include <stdio.h>
int main(void)
{
setlocale (LC_CTYPE,"ua");
 int a,b,c,d,f,sa;
printf("\n Задайте 1 число  = ");
	scanf("%d", &a);
printf("\n Задайте 2 число  = ");
	scanf("%d", &b);
printf("\n Задайте 3 число  = ");
	scanf("%d", &c);
printf("\n Задайте 4 число  = ");
	scanf("%d", &d);
printf("\n Задайте 5 число  = ");
	scanf("%d", &f);
if (a<0 || b<0 || c<0 || d<0 || f<0)
{printf("\t\nПомилка, не можна вводити вiд'ємнi числа...\n");}
else {sa = (a+b+c+d+f)/5;
printf("\n Середнє Арифметичне цих чисел = %2.d\n",sa);}
	return 0;
}
