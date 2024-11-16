#include<stdio.h>
          
int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("birinci daireyi giriniz:");
    scanf("%lf %lf %lf", &x1, &y1, &r1);

    printf("ikinci daireyi giriniz:");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    double d2 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

    if (d2 > (r1 + r2) * (r1 + r2)) {
        printf("daireler kesismiyor");
    } else if (d2 == (r1 + r2) * (r1 + r2)) {
        printf("daireler teget");
    } else {
        printf("daireler kesisiyor");
    }
}
