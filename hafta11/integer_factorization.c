#include <stdio.h>
#include <stdlib.h>

int check_if_prime(int a) {
  if (a < 2) {
    return 0;
  }

  int i;

  for (i = 2; i < a; i++) {
    if (a % i == 0) {
      return 0;
    }
  }

  return 1;
}

int find_prime_factor(int a) {
  for (int i = 2; i <= a; i ++ ) {
     if (check_if_prime(i)) {
         if (a % i == 0) {
             return i;
         }
     }
  }
}

void find_prime_factors(int a) {
    while(1) {
        if (a == find_prime_factor(a)) {
            printf("%d\n", a);
            break;
        }
       
        int b = find_prime_factor(a);
        a /= b;
        printf("%d\n", b);
    }
}

int main(int argc, char *argv[]) {
  int a = 1201289;
  find_prime_factors(a);
}
