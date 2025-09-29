#include <stdio.h>
#include <conio.h>
int A;
int B;
int C;
void main (){
    printf("masukkan angka pertama :"); scanf ("%d", &A);
    printf("masukkan angka kedua   :"); scanf ("%d", &B);
    C = A + B;
    printf ("hasil jumlah adalah C= %d", C);
    getchar();
}