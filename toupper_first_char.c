#include <stdio.h>

int main() {
    char sentence[1000];
    int i = 0;

    printf("Bir cümle girin: ");
    fgets(sentence, sizeof(sentence), stdin);

    if (sentence[0] >= 'a' && sentence[0] <= 'z') {
        sentence[0] = sentence[0] - 32;
    }

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' && sentence[i + 1] >= 'a' && sentence[i + 1] <= 'z') {
            sentence[i + 1] = sentence[i + 1] - 32;
        }
        i++;
    }

    printf("Baş harfleri büyük olan cümle: %s\n", sentence);

    return 0;
}
