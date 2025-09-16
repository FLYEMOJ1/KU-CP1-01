#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("%c\n", '\101');
    printf("%c\n", 65); // 65 is the ASCII code for 'A'
    printf("\x61\n"); // \x61 is the ASCII code for 'a'

//    int input;
//    printf("Score: ");
//    scanf("%d", &input);
//    printf("Score: %d\n", input);

    char ch[] = "a";
    printf("%c\n", ch); 
    /* will 100% goes wrong. 
       %c is the format specifier for char.
       so we need to use %s to print the string.
       but if we use %s, it will print the first character of the string.
    */

    char ch2[] = "한";
    printf("%s\n", ch2);
    /* will 100% works.
       %s is the format specifier for string.
       so we can print the string.
    */

    return 0;
}