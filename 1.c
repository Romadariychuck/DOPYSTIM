#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(void) {
	int a,b,r,sa,c;
setlocale (LC_CTYPE,"ua");
printf("\n ����� ����� a = ");
		scanf("%d",&a);
printf("\n ����� ����� b = ");
	    scanf("%d",&b);
 r = a-b;
printf("\n\r\t�i����� ����� = %d\n",r);
 sa = (a+b)/2;
printf("\r\t������ ����������� = %d\n",sa);
 c = a+b;
printf("\r\t���� ����� = %d\n\n",c);
	return 0;
	}
