#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void)
{
setlocale(LC_CTYPE,"ua");
        int n;
        printf("Введiть порядковий номер кольору: ");
        scanf("%d", &n);
        switch(n)
        {
                case 1: printf("\tЧервоний\n"); break;
                case 2: printf("\tOранжений\n"); break;
                case 3: printf("\tЖовтий\n"); break;
                case 4: printf("\tЗелений\n"); break;
                case 5: printf("\tБлакитний\n"); break;
                case 6: printf("\tСинiй\n"); break;
                case 7: printf("\tФiолетовий\n"); break;
        }

        if ( n<1 || n>7 )
        {
                printf("\t\tПомилка...\nВведiть Номер Кольору який межує в дiапазонi мiж 1 i 7\n");
        }
        
       return 0;
}
