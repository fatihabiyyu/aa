#include <stdio.h>
#include <stdlib.h>

int main()
{


    int n;

    do {
        printf("masukkan nilai N > 0 : ");
        scanf("%d", &n);        
    } while (n <= 0);

    do {
        printf("\nAnak Ayam Turun %d\n", n);
        if (n == 1) {
            break;
        } else {
            n = n - 1;
            printf("Mati satu tinggal %d \n", n);
        }
    } while (n > 0);
    
    printf("mati satu tinggal induknya \n");
    system("pause");
}