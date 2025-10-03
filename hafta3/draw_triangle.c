#include<stdio.h>

int main() {
  int n;
  printf("cizilecek ucgenin boyutunu giriniz: ");
  scanf("%d", &n);
  int i, j;
  
  for(i = 1; i <= n; i++) {
    printf("\n");
    for(j = 0; j < i; j++) {
      printf("*");
    }
    
  }
}
