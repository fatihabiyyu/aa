#include <stdio.h>
int main()
{
    int code;
    printf("Masukan Kode Hari ini [1..7]: ");
    scanf("%d", &code);

    if (code == 1)
    {
        printf("Ini adalah kode hari untuk hari SENIN\n");
    }
    else if (code == 2)
    {
        printf("Ini adalah kode hari SELASA\n");
    }
    else if (code == 3)
    {
        printf("Ini adalah kode hari RABU\n");
    }
    else if (code == 4)
    {
        printf("Ini adalah kode hari KAMIS\n");
    }
    else if (code == 5)
    {
        printf("Ini adalah kode hari JUMAT\n");
    }
    else if (code == 6)
    {
        printf("Ini adalah kode hari SABTU\n");
    }
    else if (code == 7)
    {
        printf("Ini adalah kode hari MINGGU\n");
    }
    else
    {
        printf("Kode yang anda masukkan tidak dikenali\n");
    }
    return 0;
}