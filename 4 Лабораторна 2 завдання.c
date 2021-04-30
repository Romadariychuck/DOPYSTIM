#include <stdio.h>
#include <math.h>
#include <locale.h>
#define iMAX  20
#define iMIN 1

int main(void) {
      int x,sum,i,kvadrat;
	setlocale(LC_CTYPE,"ua");
      x = 12;
     
      for(sum=0, i=x; i<=iMAX;  i+=2) sum += i;kvadrat = pow(sum,2);
        printf("\n\tFor : \t         Сума парних чисел = %d\t Квадрат = %d\n", sum,kvadrat);
      
    kvadrat = 0;
      sum=0;
      i=x-2;
      
      while((i+=2)<=iMAX) sum += i; kvadrat = pow(sum,2);
        printf("\tWhile: \t         Сума парних чисел = %d\t Квадрат = %d\n", sum,kvadrat);
        
        kvadrat = 0;
      sum=0; 
      i=x;
      do { sum += i;kvadrat = pow(sum,2); } while((i+=2)<=iMAX);
          printf("\tDo-while:\t Сума парних чисел = %d\t Квадрат = %d\n\n", sum,kvadrat);
          
return 0;
}
