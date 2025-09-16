#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("%c\n", '\101');
    printf("%c\n", 65); // 65 is the ASCII code for 'A'
    printf("\x61\n"); // \x61 is the ASCII code for 'a'

    int input;
    printf("Score: ");
    scanf("%d", &input);
    printf("Score: %d\n", input);
}