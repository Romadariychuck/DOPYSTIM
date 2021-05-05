#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main (void){
int n=1;int minimum = 0; int minind=0; int max = 0; int maximus =0;
int rizn = 0;
	setlocale(LC_CTYPE,"ua");
while(1){ 
printf("\n\nВведiть кiлькiсть масивiв: ");
scanf("%d",&n);
if(n<=0){printf("\n\nVu Ви Ввели некоректне значення. Введiть число бiльше нуля...\n");continue;}

else{ 
int i = n;int colCount = n;
 int a[i];
for(int i = 0; i < colCount; i++)
{ printf("a[%d]=", i);
scanf("%d", &a[i]);
}

for(int i = 0; i < colCount; i++){ 
if(a[i] > max){ 
max = a[i];
maximus = i; }}
printf("\nМаксимальний масив: a[%d] = %d\n",maximus, a[maximus]);//max 

for(int i = 0; i < colCount; i++){
    if (abs(a[i]) < a[minimum])
        {
            a[minimum] = abs(a[i]);
            minind = i;
        }
}
printf("\nМiнiмальний масив: a[%d] = %d\n",minind, a[minimum]);
     rizn = fabs(a[minimum]) - fabs(a[maximus]);
     printf("\nРiзниця модулiв = %d\n",rizn);
break;}
}
}
