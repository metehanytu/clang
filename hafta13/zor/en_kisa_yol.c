#include <stdio.h>

#define ROWS 4
#define COLS 4

void find_shortest_path(int matrix[ROWS][COLS], int start_row, int start_col, int end_row, int end_col);

int main() {
    int matrix[ROWS][COLS] = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 1, 0},
        {1, 1, 1, 1}
    };

    int start_row = 0, start_col = 0; // Başlangıç noktası
    int end_row = 3, end_col = 3;     // Bitiş noktası

    find_shortest_path(matrix, start_row, start_col, end_row, end_col);

    return 0;
}

void find_shortest_path(int matrix[ROWS][COLS], int start_row, int start_col, int end_row, int end_col) {
    // 4x4 boyutunda bir matris veriliyor. Matrisin her hücresi ya 1 (yürülebilir alan) ya da 0 (duvar) değerine sahiptir. 
    // Bir başlangıç noktası ve bir bitiş noktası verilmiştir. Başlangıçtan bitişe olan en kısa yolu bulan ve bu yolu ekrana yazdıran bir fonksiyon yazın.
    // Sadece yukarı aşağı sağa sola hareket mümkündür. Duvarlar aşılamaz.
}
