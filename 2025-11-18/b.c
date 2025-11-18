#include <stdio.h>
#include <string.h>

void sort (int* data, int end_num) {
    int* ptr;
    int idx;
    int tmp;
    int is_zero;

    while (1) {
        ptr = data;
        is_zero = 1;
        for (idx = 0; idx < end_num - 1; idx++) {
            if (*ptr > *(ptr + 1)) {
                tmp = *ptr;
                *ptr = *(ptr + 1);
                *(ptr + 1) = tmp;
                is_zero = 0;
            }
            ptr++;
            }
            if (is_zero == 1)
                break;
        }
    }

    int main(void)
    {
        int ary[10] = { 4, 5, 1, 2, 6, 7, 2, 0, 9, 8 };
        int idx;
        sort(ary, 10);
        for (idx = 0; idx < 10; idx++) {
            printf("%d\n", ary[idx]);
        }
        return 0;
    }