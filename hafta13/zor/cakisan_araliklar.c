#include <stdio.h>

void merge_intervals(int intervals[][2], int size);

int main() {
    int intervals[][2] = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    int size = sizeof(intervals) / sizeof(intervals[0]);

    merge_intervals(intervals, size);

    return 0;
}

void merge_intervals(int intervals[][2], int size) {
    // Bir dizi aralık veriliyor (intervals). Çakışan aralıkları birleştiren bir program yazın. Aralıklar birleştirildikten sonra yeni bir dizi oluşturulmalı ve bu dizi ekrana yazdırılmalıdır.
    // Beklenen çıktı "Birleştirilmiş aralıklar: { {1, 6}, {8, 10}, {15, 18} }"
}
