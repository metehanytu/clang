#include <stdio.h>
#include <stdlib.h>

void karesini_al(int a, int b) {
    int real = a * a - b * b;
    int imag = 2 * a * b;

    printf("Sonuc: %d+%di\n", real, imag);
}

int main(int argc, char *argv[]) {
    printf("Bir karmasik sayi girin (format: a+bi): ");

    int a, b;
    scanf("%d+%di", &a, &b);
    karesini_al(a, b);

    return 0;
}
