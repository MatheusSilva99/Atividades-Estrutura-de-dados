#include <stdio.h>

int main() {
    int arr[] = {10, 20, 35, 50, 75};
    int target = 55;
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("[%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    printf("Nao encontrado\n");
    return 0;
}