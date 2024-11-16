#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;
    int i;

    printf("Bir kelime veya cümle girin: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    if (str[length - 1] == '\n') {
        length--;
    }

    int is_palindrome = 1;

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("Girdiğiniz kelime veya cümle bir palindromdur.\n");
    } else {
        printf("Girdiğiniz kelime veya cümle bir palindrom değildir.\n");
    }

    return 0;
}
