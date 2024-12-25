#include <stdio.h>

#define ROWS 4
#define COLS 4

int frame_sum(int matrix[ROWS][COLS]);

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int total = frame_sum(matrix);
    printf("Çerçevenin toplamı: %d\n", total);

    return 0;
}

int frame_sum(int matrix[ROWS][COLS]) {
    // Kodunuzu buraya yazın
    // Sadece çerçevedeki elemanlar toplanacak yani bu örnek için : 1,2,3,4,8,12,16,15,14,13,9,5
    // tek for ile yapınız
}
