#include <stdio.h>
#include <stdbool.h>

bool is_permutation(int arr1[], int size1, int arr2[], int size2);

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (is_permutation(arr1, size1, arr2, size2)) {
        printf("Diziler permütasyondur.\n");
    } else {
        printf("Diziler permütasyon değildir.\n");
    }

    return 0;
}

bool is_permutation(int arr1[], int size1, int arr2[], int size2) {
    // Kodunuzu buraya yazın
}
