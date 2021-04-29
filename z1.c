#include <math.h>
#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_CTYPE,"ua");
    long d1, d2;
    int m1, y1;
    int m2, y2;
	int mes1, mes2,rizn;
    printf("\n Введiть дату народження першої людини (день) =  ");
    scanf("%d",&d1);
printf("\n Введiть дату народження першої людини (мiсяць) =  ");
    scanf("%d",&m1);
printf("\n Введiть дату народження першої людини (рiк) =  ");
    scanf("%d",&y1);
printf("\n Введiть дату народження другої людини (день) =  ");
    scanf("%d",&d2);
printf("\n Введiть дату народження другої людини (мiсяць) =  ");
    scanf("%d",&m2);
printf("\n Введiть дату народження другої людини (рiк) =  ");
    scanf("%d",&y2); 
   d2= d2 + (m2 * 30) + (y2 * 365);
   d1= d1 + (m1 * 30) + (y1 * 365);
   mes1 = d1/30;mes2 =d2/30;
 if (d2>d1){rizn = mes2-mes1;
        printf("\n\t Друга людина молодше на %d мiсяцiв(я)",rizn);}
    if(d1>d2){rizn = mes1-mes2;
        printf("\n\t Перша людина молодше на %d мiсяцiв(я) \n",rizn);}

    return 0;
}
