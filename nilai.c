#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int Nilai;
    printf("Masukan Nilai Anda :");
    scanf("%d", &Nilai);
    if (Nilai > 60)
    {
        printf("Selamat, Anda Lulus\n");
    }
    else
    {
        printf("Maaf, Anda belum Berhasil\n");
    }
    system("pause");
    return 0;
}
