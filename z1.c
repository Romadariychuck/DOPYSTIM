#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
    int y, z, f, x;
    float h, g;
    setlocale (LC_CTYPE,"ru");
    while (1) {
    printf("\n ������� y = ");
    scanf("%d", &y);
    printf("\n ������� z = ");
    scanf("%d", &z);
    printf("\n ������� f = ");
    scanf("%d", &f);
    g = sin(z);
    h = (pow(x,4)/2)-(pow(g,2)*f);

        if ( h == 0 ) 
        {
            printf("\t��������� �i����� - 0, ��������� �� ���...");continue;
        }

        else { x = (1+cos(y-2))/(pow(x,4)/2)-(pow(g,2)*f);
    printf(" x = %d\n" ,x);
            break;
        }
    }
    return 0;
}
