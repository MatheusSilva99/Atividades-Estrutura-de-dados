#include <stdio.h>

int main() {
    int arr[] = {120, 150, 80, 200, 300, 250};
    int n = 6;

    int max = arr[0] + arr[1];

    for (int i = 1; i < n - 1; i++) {
        int soma = arr[i] + arr[i + 1];
        if (soma > max) {
            max = soma;
        }
    }

    printf("%d\n", max);
    return 0;
}