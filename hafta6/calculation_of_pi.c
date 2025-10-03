#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int skor = 0;
    double x, y;

    printf("Monte Carlo yöntemi ile Pi sayısını hesaplayın.\n");
    printf("Kaç adet rastgele nokta üretmek istiyorsunuz? ");
    scanf("%d", &n);

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        
        if ((x * x + y * y) <= 1.0) {
            skor++;
        }
    }
    
    double pi = 4.0 * skor / n;

    printf("Yaklaşık Pi değeri: %f\n", pi);
    return 0;
}
