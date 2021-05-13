#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    int n = 1;int m = 1; int j; int i;
	setlocale(LC_CTYPE,"ua");
printf("\n\nВведiть к-сть рядкiв: ");
scanf("%d",&n);
printf("\n\nВведiть к-сть стовпцiв: ");
scanf("%d",&m);
i = n;int colCount = n; j = m; int NextCount = m;
float C[i][j];
for(int i = 0; i < colCount; i ++){ 
for(int j = 0; j < NextCount; j ++)
   if (i<j) C[i][j]= pow(i,2)+pow(j,2)+2;
    if (i==j) C[i][j]=(1)/(i+j);
    if (i>j) C[i][j] = sin(i)+sin(j);
}
printf("\n\nДвухмiрний масив C: \n");
for (int i = 0; i < colCount; i++){
for (int j = 0; j < NextCount; j++)
printf("a[%d][%d]=%f\t", i, j, C[i][j]); printf("\n");}
}
