#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// void Minus(int x, int y) {
//     printf("x-y=%d\n", x - y);
// }
//
// int Plus(int x, int y) {
//     return x + y;
// }
// int main() {
//     Minus(20, 5);
//     printf("x+y=%d\n", Plus(2, 7));
//     return 0;
// }

// --------------------------------------------------------

// int main() {
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    printf("%d\n", a + b);
// }

// int main() {
//     int a = 3;
//
//     const int cint = a;
//     const int* ptr = &a;
//
//     printf("a: %d, cint: %d\n", a, cint);
//     printf("a: %d, *ptr: %d, ptr: %x\n", a, *ptr, ptr);
//
//     a = 10;
//     printf("a: %d, cint: %d\n", a, cint);
//     printf("a: %d, *ptr: %d, ptr: %x\n", a, *ptr, ptr);
//
//     return 0;
// }

// --------------------------------------------------------

// int main() {
//     const double a = 85.36;
//     double* b = &a;
//
//     printf("%.2f\n", a);
//     printf("%.2f\n", *b);
//
//     *b = 95.56;
//     printf("%.2f\n", *b);
//     printf("%.2f\n", a);
//     return 0;
// }

// --------------------------------------------------------

int main() {
    int a = 3, b = 5, c = 7;

    printf("%d\n", a + b * c);
    printf("%d\n", (a + b) * c);
    printf("%d\n", a + (b * c));

    return 0;
}