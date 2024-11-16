#include <stdio.h>
          
int main() {
    int a = 3;
    int b = 5;
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("yerlerini değiştirdim (a,b) = (%d, %d)", a, b);
    return 0;
}
