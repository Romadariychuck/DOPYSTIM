#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_CTYPE,"ua");
    long d1, d2;
    int m1, y1;
    int m2, y2;
	int mes1, mes2,rizn;
    printf("\n ����i�� ���� ���������� ����� ������ (����) =  ");
    scanf("%d",&d1);
printf("\n ����i�� ���� ���������� ����� ������ (�i����) =  ");
    scanf("%d",&m1);
printf("\n ����i�� ���� ���������� ����� ������ (�i�) =  ");
    scanf("%d",&y1);
printf("\n ����i�� ���� ���������� ����� ������ (����) =  ");
    scanf("%d",&d2);
printf("\n ����i�� ���� ���������� ����� ������ (�i����) =  ");
    scanf("%d",&m2);
printf("\n ����i�� ���� ���������� ����� ������ (�i�) =  ");
    scanf("%d",&y2); 
   d2= d2 + (m2 * 30) + (y2 * 365);
   d1= d1 + (m1 * 30) + (y1 * 365);
   mes1 = d1/30;mes2 =d2/30;
 if (d2>d1){rizn = mes2-mes1;
        printf("\n\t ����� ������ ������� �� %d �i���i�(�)",rizn);}
    if(d1>d2){rizn = mes1-mes2;
        printf("\n\t ����� ������ ������� �� %d �i���i�(�) \n",rizn);}

    return 0;
}
