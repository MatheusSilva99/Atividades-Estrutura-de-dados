#include <stdio.h>

int main() {
    int idades[] = {18, 21, 30, 25, 40, 33};
    int n = 6;

    for (int i = 0; i < n; i++) {
        if (idades[i] % 2 != 0) {
            printf("%d ", idades[i]);
        }
    }

    return 0;
}