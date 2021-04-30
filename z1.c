#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
    int y, z, f, x;
    float h, g;
    setlocale (LC_CTYPE,"ru");
    while (1) {
    printf("\n Задайте y = ");
    scanf("%d", &y);
    printf("\n Задайте z = ");
    scanf("%d", &z);
    printf("\n Задайте f = ");
    scanf("%d", &f);
    g = sin(z);
    h = (pow(x,4)/2)-(pow(g,2)*f);

        if ( h == 0 ) 
        {
            printf("\tРезультат дiлення - 0, Спробуйте ще раз...");continue;
        }

        else { x = (1+cos(y-2))/(pow(x,4)/2)-(pow(g,2)*f);
    printf(" x = %d\n" ,x);
            break;
        }
    }
    return 0;
}
