#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void)
{
setlocale(LC_CTYPE,"ua");
        int n;
        printf("����i�� ���������� ����� �������: ");
        scanf("%d", &n);
        switch(n)
        {
                case 1: printf("\t��������\n"); break;
                case 2: printf("\tO��������\n"); break;
                case 3: printf("\t������\n"); break;
                case 4: printf("\t�������\n"); break;
                case 5: printf("\t���������\n"); break;
                case 6: printf("\t���i�\n"); break;
                case 7: printf("\t�i��������\n"); break;
        }

        if ( n<1 || n>7 )
        {
                printf("\t\t�������...\n����i�� ����� ������� ���� ���� � �i������i �i� 1 i 7\n");
        }
        
       return 0;
}
