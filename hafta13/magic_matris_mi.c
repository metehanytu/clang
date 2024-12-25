#include <stdio.h>
#include <stdbool.h>

bool is_magic_square(int matrix[3][3], int size);

int main() {
    int matrix[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    if (is_magic_square(matrix, 3)) {
        printf("Bu bir sihirli karedir.\n");
    } else {
        printf("Bu bir sihirli kare değildir.\n");
    }

    return 0;
}

bool is_magic_square(int matrix[3][3], int size) {
    // Kodunuzu buraya yazın
}
