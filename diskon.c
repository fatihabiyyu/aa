#include <stdio.h>
#include <conio.h>
int main(){
    double beli, diskon, bayar;
    
    printf("Jumlah pembelian = Rp. ");
    scanf("%lf", &beli);
    if (beli >= 100000)
        diskon = 10000;
    else
        diskon = 0;
    bayar = beli - diskon;

    printf("Jumlah pembelian = Rp. %.2lf\n", beli);
    printf("besar diskon = Rp. %.2lf\n", diskon);
    printf("Total pembayaran = Rp. %.2lf\n", bayar);
    getchar();
    return (0);
}