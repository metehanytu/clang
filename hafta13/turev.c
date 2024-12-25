#include <stdio.h>
#include <math.h>

// Polinomun değerini hesaplayan fonksiyon
// Bunu derivative_at_point fonksiyonunun içinde kullanacaksınız.
double evaluate_polynomial(double coefficients[], int degree, double x);

// Limit tanımını kullanarak türevi hesaplayan fonksiyon
double derivative_at_point(double coefficients[], int degree, double x, double h);

int main() {
    // Polinomun katsayıları (örnek: 2x^3 + 3x^2 + 5x + 7)
    double coefficients[] = {7, 5, 3, 2}; // Sabitten en yüksek dereceye doğru
    int degree = 3; // Polinomun derecesi

    double x = 2.0; // Türevin hesaplanacağı nokta
    double h = 1e-5; // Limit tanımı için küçük bir h

    double result = derivative_at_point(coefficients, degree, x, h);
    printf("Türevin %.2f noktasındaki değeri: %.5f\n", x, result);

    return 0;
}

double evaluate_polynomial(double coefficients[], int degree, double x) {
    // Kodunuzu buraya yazın
}

double derivative_at_point(double coefficients[], int degree, double x, double h) {
    // Kodunuzu buraya yazın
}
