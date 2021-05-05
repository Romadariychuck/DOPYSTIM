#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>
int main (void){
   const int low = -100; const int High = 100;
int n=1; int kol =0; int ind1 = 0; int ind2 = 0;
int sum = 0;int max = 0; int maximus = 0;
setlocale (LC_CTYPE,"ua");
while(1){ 
printf("\n\nВведiть кiлькiсть масивiв: ");
scanf("%d",&n);
if(n<=0){printf("\n\nВведiть число бiльше нуля...\n");continue;}

else{ 
int i = n;int colCount = n;
 int a[i];
srand(time(0));
for (int i=0; i<n; i++){ 
a[i]=low+rand()%High;
}
for (int i=0; i<colCount; i++){ 
printf("a[%d]=%d\t", i, a[i]);}



for(int i = 0; i < colCount; i++){ 
if(a[i] > max){ 
max = a[i];
maximus = i; }}


printf("\n\nMax масивiв: a[%d] = %d",maximus, a[maximus]);
for(int i = 0; i < colCount; i++){
    if(a[i]==0 && kol==0){
        kol++;
        ind1 = i;
    continue;}
    if(kol==0){printf("\nНулiв немає\n");break;}
if(a[i]==0 && kol == 1){
    kol++;
        ind2 = i;
continue;}

if (a[i]==0 && kol == 2){
    kol = kol + 1;
continue;}
if(kol == 3){
    printf(" 3 нуля. добуток = 0");break;
}
}
if((ind1 + 1) == ind2){
    printf("Нулi стоять дуже близько i заданi масиви не можуть відповiдати умовам задачi");
    break;
}
if(kol == 2){
    
    for (int i = ind1 + 1; i < ind2; i++){ 
            sum = sum + a[i];
      }
      printf("\n Сума мiж нулями:  %d",sum);
break;}
if(kol==1){
    printf("Всього лиш один нуль. Не вiдповiдає умовам задачi");
    break;
}
}

break;}
}
