#include<stdio.h>
#define PI 3.14159265359 

int main() {
  double r;
  printf("cemberin yari capini giriniz: ");
  scanf("%lf", &r);
  
  printf("cemberin alani %lf'dir", (double) PI * r * r);
}
