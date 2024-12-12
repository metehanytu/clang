#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sifrele(char *str) {
    int offset = 3; // Harflerin ötelenme miktarı

    for (int i = 0; str[i] != '\0'; i++) {
        // Küçük harfler için kontrol ve öteleme
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' + offset) % 26;
        } 
        // Büyük harfler için kontrol ve öteleme
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' + offset) % 26;
        }
    }

    printf("Sifrelenmis metin: %s\n", str);
}

int main(int argc, char *argv[]) {
    char str[100];

    printf("Metni girin: ");
    fgets(str, sizeof(str), stdin);

    sifrele(str);

    return 0;
}
