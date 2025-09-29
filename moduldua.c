#include <stdio.h>
int main (){
    int a, b, c, max, min;
    printf("masukkan tiga bilangan: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    printf("bilangan terbesar adalah %d\n", max);
    printf("bilangan terkecil adalah %d\n", min);
    return 0;

}
