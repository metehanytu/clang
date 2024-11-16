 #include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    return 0;
}
