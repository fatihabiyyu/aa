#include <stdio.h>
#include <stdlib.h>

int main(){
    char operator;
    float operand1, operand2;
    printf("Program kalkulator sederhana.....\n");
    printf("* => perkalian\n");
    printf("/ => pembagian\n");
    printf("+ => penjumlahan\n");
    printf("- => pengurangan\n");
    printf("Contoh Menghitung => 5/2 Lalu tekan ENTER\n\n");
    printf("Silahkan Masukkan Operasi : ");
    if (scanf("%f %c %f", &operand1, &operator, &operand2) != 3) {
        printf("\nInput tidak valid.\n");
        return 1;
    }
    switch (operator) {
        case '*':
            printf("Hasil = %.2f\n", operand1 * operand2);
            break;
        case '/':
            if (operand2 == 0){
                printf("\nError: Pembagian dengan nol tidak diizinkan.\n");
                return 1;
            }
            printf("Hasil = %.2f\n", operand1 / operand2);
            break;
        case '+':
            printf("Hasil = %.2f\n", operand1 + operand2);
            break;
        case '-':
            printf("Hasil = %.2f\n", operand1 - operand2);
            break;
        default:
            printf("\nOperator tidak valid.\n");
            return 1;
    }
    return 0;
}
