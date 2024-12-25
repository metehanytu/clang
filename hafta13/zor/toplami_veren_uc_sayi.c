#include <stdio.h>
#include <stdbool.h>

void find_triplet(int arr[], int size, int target);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    find_triplet(arr, size, target);

    return 0;
}

void find_triplet(int arr[], int size, int target) {
    // arr dizisin üç eleman bulun, bu elemanların toplamı verilen target'e eşit olmalıdır. Eğer böyle bir üçlü varsa, bu elemanları ekrana yazdırın. Yoksa "böyle bir üç eleman yok" yazdırın.
}
