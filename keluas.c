#include <stdio.h>
int main()
{
    float phi=3.14;
    float jari_jari, luas, keliling;
    jari_jari=7.0;
    luas =  phi * jari_jari * jari_jari;
    keliling = 2 * phi * jari_jari;
    
    printf("luas lingkaran %f\n", luas);
    printf("keliling lingkaran %f", keliling);
}