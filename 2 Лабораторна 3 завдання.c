#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void) {
int a,b;
setlocale (LC_CTYPE,"ua");
printf("\n Перше число a = ");
		scanf("%d",&a);
printf("\n Друге число b = ");
	    scanf("%d",&b);
    float x;

    x = sqrt(a-b)*2+sqrt(a*b);

	printf("\n\t x = %.3f\n\n", x);

	return 0;
}
