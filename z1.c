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
printf("\n\n����i�� �i���i��� �����i�: ");
scanf("%d",&n);
if(n<=0){printf("\n\n����i�� ����� �i���� ����...\n");continue;}

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


printf("\n\nMax �����i�: a[%d] = %d",maximus, a[maximus]);
// 2 zadacha
for(int i = 0; i < colCount; i++){
    if(a[i]==0 && kol==0){
        kol++;
        ind1 = i;
    continue;}
    if(kol==0){printf("\n���i� ����\n");break;}
if(a[i]==0 && kol == 1){
    kol++;
        ind2 = i;
continue;}

if (a[i]==0 && kol == 2){
    kol = kol + 1;
continue;}
if(kol == 3){
    printf(" 3 ����. ������� = 0");break;
}
}
if((ind1 + 1) == ind2){
    printf("���i ������ ���� ������� i �����i ������ �� ������ �����i���� ������ �����i");
    break;
}
if(kol == 2){
    
    for (int i = ind1 + 1; i < ind2; i++){ 
            sum = sum + a[i];
      }
      printf("\n ���� �i� ������:  %d",sum);
break;}
if(kol==1){
    printf("������ ��� ���� ����. �� �i����i�� ������ �����i");
    break;
}
}

break;}
}
