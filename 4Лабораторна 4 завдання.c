#include <stdio.h>
#include <math.h>
#include <locale.h>
#define PI 3.14


int main(void) {
  float dx, y, a, b,x;
setlocale (LC_CTYPE,"ua");
  while (1) {
    printf("Введiть нижню межу iнтервалу: ");
    scanf("%f", &a);
    printf("Введiть верхню межу iнтервалу: ");
    scanf("%f", &b);
    printf("Введiть iнтервал: ");
    scanf("%f", &dx);

    if (a + dx < b) {
      printf("Нижня межа: ");
      printf("%2.f\n", a);
        a = -(2/PI);

      printf("Верхня межа: ");
      printf("%2.f\n", b);
        b = 3*PI/3;

      printf("Крок iнтервалу: ");
      printf("%2.1f\n", dx);
        dx = PI/30;

      printf(" X\t\tY\n");
      while (a <= b) {
        y = (float)(cos(a)*cos(a)*(b)+3*sin(b));
		x = (float)(cos(a)*cos(a)*(b)+3*sin(b));
        printf("%2.1f\t\n", a, y);
		printf("%2.1f\t\t", a, x);
        a += dx;

      }
      break;
    }
    else 
    {
        printf("\nВведено неправильну нижню та верхню меж. Спробуйте ще раз...\n");
        continue;
    }
  }

  return 0;
}
