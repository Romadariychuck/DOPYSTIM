#include <math.h>
#include <locale.h>
#include <stdio.h>
int main(void){
    int i,j,s,p = 0;
for (i = 1; i <= 5; i++)
{ 
for (s = 1, j = 1;j <= i; j++) s *= (i-j);
p += s;
}
printf("p= %d\n", p);
        return 0;
}
