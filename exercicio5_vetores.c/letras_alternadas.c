#include <stdio.h>

int main() {
    char nome[] = "caparroz";

    for (int i = 0; nome[i] != '\0'; i += 2) {
        printf("%c", nome[i]);
    }

    return 0;
}