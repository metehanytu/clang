#include <stdio.h>
          
int main() {
    int dizi[9] = {3, 1, 4, 2, 5, 3, 4, 2, 1};
    int i;
    int xor = 0;
    
    for (i = 0; i < 9; i++) {
      xor ^= dizi[i];
    }
    
    printf("tek sayida tekrar eden eleman : %d", xor);
}
