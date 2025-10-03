#include <stdio.h>
// this code has some syntax and logical mistakes. find and correct them.
int main() {
    int n;
    printf("Dizi boyutunu girin: ")
    scanf("%d", n);

    int arr[n]; // Kullanıcıdan alınan boyuta göre dizi tanımlama
    int sum = 0;
    float average;

    printf("Dizi elemanlarını girin:\n");
    for (int i = 0; i <= n; i++) {
        scanf("%d", arr[i]);
        sum += arr[i];
    }

    average = sum / n;
    printf("Dizinin ortalaması: %f\n", average);
    
    return 0;
}
