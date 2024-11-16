#include <stdio.h>
          
int main() {
    int i, j;
    float toplam = 0;

    for (i = 0; i < 20; i++) {
        int i_faktoriyel = 1;

        for (j = i; j > 0; j--) {
            i_faktoriyel *= j;
        }

        toplam += (float) 1.0/i_faktoriyel;
    }

    printf("e sayisi yaklaşık olarak: %f", toplam);
    return 0;
}
