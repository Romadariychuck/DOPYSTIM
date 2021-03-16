#include<stdio.h>
#include<math.h>
#include<locale.h>



int main() {

    const a = -50;
    const b = 4;
    const c = 9;

    float y;

    y = ((c * a) / (a + b)) + ((b * c) / (c + a));


    printf("\n\t y = %.3f\n\n", y);



    return 0;
}
