#include <stdio.h>
#include <string.h>

int main(){
    char name[200], nim[20], matkul[100];
    char ans, nilaiHuruf;
    int nilai;

    printf("----Nilai Matkul Checker----");
    ans = 'Y';
    while (ans == 'Y' || ans == 'y'){
        printf("\nMasukkan nama Anda\t: ");
        scanf("%s", &name);
        printf("\nMasukkan NIM Anda\t: ");
        scanf("%s", &nim);
        printf("\nMata kuliah yang akan dicek\t: ");
        scanf("%s", &matkul);
        printf("\nMasukkan nilai dari matkul tsb\t: ");
        scanf("%d", &nilai);
        printf("\nData berhasil diinput!\n");

        if (nilai >= 85 && nilai <= 100){
            nilaiHuruf = 'A';
        } else if (nilai >= 75 && nilai < 85){
            nilaiHuruf = 'B';
        } else if (nilai >= 65 && nilai < 75){
            nilaiHuruf = 'C';
        } else if (nilai < 65){
            nilaiHuruf = 'D';
        }

        printf("Nilai dari %c\n", nilaiHuruf);
        printf("Ingin mencoba lagi? [Y/T] : ");
        scanf(" %s", &ans);

        fflush(stdin);
    }
    return 0;
}
