#include<stdio.h>
#include <locale.h>
void white (void) {
}
void NumbersArrangedInDescending ( int arr [10] ) {
 setlocale(LC_CTYPE,"ua");
        int i, j, a, n;
        printf("����i�� �-��� �������i�: ");
        scanf("%d", &n);
        printf("����i�� �����: \n");
        for (int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (arr[i] < arr[j]) 
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
        printf("\t\t\t���������: \n");
        printf("�����, ����������i � ������� ���������: ");
        for (i = 0; i < n; ++i) 
        {   
            printf("\n\t\t %d\n", arr[i]);
            white();
        }
}

int main (void) {
    int arr[10];
    int v;
setlocale(LC_CTYPE,"ua");
    printf("\n�����i�� ��� ����i�: ");
    printf("\n\t1: ������;\n\t2: ���i�.");
    printf("\n\t : ");
    scanf("%d", &v);
    if( v == 1 ) {
    NumbersArrangedInDescending(arr);
    }
    else {
        return 0;
    }
}
