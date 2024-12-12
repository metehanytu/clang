#include <stdio.h>
#include <stdlib.h>

void TOPLA(int A[3][3], int B[3][3]) {
    int C[3][3]; // Sonuç matrisi

    // Matrisleri toplama
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Sonuç matrisini ekrana yazdırma
    printf("Sonuc Matris:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    //Ödev olarak bunu iç içe for kullanmadan yapabilirsiniz.
    //Yani toplamda bu fonksiyon içinde 4 adet for döngüsü yerine tek for döngüsü olsun.
}

int main(int argc, char *argv[]) {
    int A[3][3] =
    {{1,2,3},
    {4,5,6},
    {7,8,9}};

    int B[3][3] =
    {
    {-1,-2,-3},
    {-4,-5,-6},
    {-7,-8,-9}
    };

    TOPLA(A, B);

    return 0;
}
