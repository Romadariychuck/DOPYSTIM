#include <math.h>
#include <locale.h>
#include <stdio.h>
int main(void){
int x,y;
setlocale(LC_CTYPE, "ua");
printf("\n ������� x = ");
	scanf("%d",&x);
if(x<0){printf("�� ����� �i�'���� �����...��������� �� ���\n");} 
else {y = (pow(x,4))/(sqrt(fabs(x-10))-pow(x,2));
	printf("\n �i����i�� = %2.d\n", y);}
return 0;
}
