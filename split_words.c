#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Bir cümle girin: ");
    fgets(str, sizeof(str), stdin);

    printf("Cümledeki kelimeler:\n");

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            printf("%c", str[i]);
        } else if (str[i] == ' ' || str[i] == '\n') {
            printf("\n");
        }
        i++;
    }

    return 0;
}
