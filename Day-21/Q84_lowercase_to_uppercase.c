//lower to upper case conversion
#include <stdio.h>
int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Uppercase = ");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}