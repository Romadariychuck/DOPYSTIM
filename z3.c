#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
int a,b,c,s;
setlocale(LC_CTYPE,"ua");
printf("\n ������� �������� ��i��i� �i�������� = ");
	scanf("%d",&c);
printf("\n ������� �������� ������ � �����i� = ");
	scanf("%d",&a );
b = c - a;
s = a+b+c;
if(b<0){printf("\n ��������� - �i�'���� �����... �������\n");}
	else{
	printf("\t������ ����� = %2.d\n",b);
    printf("\t����� = %d\n",s);}
	return 0;
}
