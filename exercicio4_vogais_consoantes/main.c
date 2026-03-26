#include <stdio.h>

int main() {
    char s[51];
    int vogais = 0, consoantes = 0;

    scanf("%[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c >= 'a' && c <= 'z') {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vogais++;
            else
                consoantes++;
        }
    }

    printf("%d %d\n", vogais, consoantes);
    return 0;
}