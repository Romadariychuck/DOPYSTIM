#include <math.h>
#include <locale.h>
#include <stdio.h>
int main(void)
{
setlocale (LC_CTYPE,"ua");
 int a,b,c,d,f,sa;
printf("\n ������� 1 �����  = ");
	scanf("%d", &a);
printf("\n ������� 2 �����  = ");
	scanf("%d", &b);
printf("\n ������� 3 �����  = ");
	scanf("%d", &c);
printf("\n ������� 4 �����  = ");
	scanf("%d", &d);
printf("\n ������� 5 �����  = ");
	scanf("%d", &f);
if (a<0 || b<0 || c<0 || d<0 || f<0)
{printf("\t\n�������, �� ����� ������� �i�'���i �����...\n");}
else {sa = (a+b+c+d+f)/5;
printf("\n ������ ����������� ��� ����� = %2.d\n",sa);}
	return 0;
}
