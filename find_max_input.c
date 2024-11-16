#include<stdio.h>

int main() {
  int a, b, c;
  printf("aralarında boşluk bırakacak şekilde üç sayı giriniz: ");
  scanf("%d %d %d", &a, &b, &c);
  
  int en_buyuk = a;
  
  if (b > en_buyuk) {
    en_buyuk = b;
  }
  
  if (c > en_buyuk) {
    en_buyuk = c;
  }
  
  printf("en büyük sayı: %d", en_buyuk);
}
