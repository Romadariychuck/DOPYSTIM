#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void) {
int a,b,sy,fc,d; 
setlocale (LC_CTYPE,"ua");
printf("\n ����� ����� a = ");
		scanf("%d",&a);
printf("\n ����� ����� b = ");
	    scanf("%d",&b);
sy=a+b;
printf("\n\r\t���� ����� = %d\n",sy);
fc=(a/b);
printf("\n\r\t�i�� ������� �i� �i����� 1 �� 2 = %d\n",fc);
d=(a+b)*3;
printf("\n\r\t�������� ������� = %d\n\n",d);
	
	return 0;
}
