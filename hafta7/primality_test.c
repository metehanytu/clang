#include<stdio.h>

int main() {
  int n;
  printf("bir sayi giriniz: ");
  scanf("%d", &n);
  int kabul = 1;
  int i;
  
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      kabul = 0;
      break;
    }
  }
  
  if (kabul && n >= 2) {
    printf("sayi asaldir");
  } else {
    printf("sayi asal degildir");
  }
}
