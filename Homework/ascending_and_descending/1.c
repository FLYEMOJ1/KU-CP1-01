#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int* data, int end_num, int mode) {
    int idx;
    int is_zero = 0; // Optimization flag
    int tmp;
    int* ptr;

    while (1)
    {
        is_zero = 0;
        ptr = data;

        for (idx = 0; idx < end_num -1; idx++) {
            int should_swap = 0; // for deciding whether to swap

            if (mode == 1) {
                if (*ptr > *(ptr + 1)) should_swap = 1;
            }
            else if (mode == 2) {
                if (*ptr < *(ptr + 1)) should_swap = 1;
            }
            if (should_swap) {
                tmp = *ptr;
                *ptr = *(ptr + 1);
                *(ptr + 1) = tmp;
                is_zero = 1;
            }
            ptr++;
        }
        if (!is_zero) break;
    }
}

int main() {
    int ary[10] = { 4, 5, 1, 2, 6, 7, 2, 0, 9, 8 };
    int selection;

    printf("올림차순(1), 내림차순(2) 선택: ");
    scanf("%d", &selection);

    if (selection == 1 || selection == 2) {
        sort(ary, 10, selection);

        printf("정렬 된 배열:\n");
        for (int i = 0; i < 10; i++) {
            printf("%d\n", ary[i]);
        }
    }
    else {
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}