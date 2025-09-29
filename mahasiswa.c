#include <stdio.h>

char nilaiHuruf(float nilaiAkhir) {
    if (nilaiAkhir >= 90 && nilaiAkhir <= 100)
        return 'A';
    else if (nilaiAkhir >= 70 && nilaiAkhir < 90)
        return 'B';
    else if (nilaiAkhir >= 60 && nilaiAkhir < 70)
        return 'C';
    else if (nilaiAkhir >= 50 && nilaiAkhir < 60)
        return 'D';
  
        return 'E'; // Invalid
}
        int main() {
            char nim[20], nama[50];
            float nilaiUTS, nilaiUAS, nilaiTugas, nilaiAkhir;
            printf("masukkan NIM : ");
            scanf("%s", nim);
            printf("masukkan nama : ");
            scanf(" %[^\n]s", nama);
            printf("masukkan nilai UTS : ");
            scanf("%f", &nilaiUTS);
            printf("masukkan nilai UAS : ");
            scanf("%f", &nilaiUAS);
            printf("masukkan nilai Tugas : ");
            scanf("%f", &nilaiTugas);
            nilaiAkhir = (0.3 * nilaiUTS) + (0.5 * nilaiUAS) + (0.2 * nilaiTugas);
            printf("\nLAPORAN NILAI MAHASISWA\n");
            printf("NIM : %s\n", nim);
            printf("nama : %s\n", nama);
            printf("nilai akhir : %.2f\n", nilaiAkhir);
            printf("nilai huruf : %c\n", nilaiHuruf(nilaiAkhir));
            return 0; 

        }