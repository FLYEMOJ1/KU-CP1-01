#include <stdio.h>
#include <string.h>
// Q9:
// int main() {
//     int absent, sc1, sc2;
//     printf("Absent days: ");
//     scanf("%d", &absent);
//     if (absent < 4) {
//         print("Score 1 2 : ");
//         scanf("%d %d", &sc1, &sc2);
//         int avg = (sc1 + sc2) / 2;
//         if (avg >= 80)
//             printf("Grade: Pass\n");
//         else if (avg >= 60) // 60 <= avg < 80 (不符合常识)
//         else if (60 <= avg && avg < 80)
//             printf("Retest\n");
//             else
//             printf("!!Fail!!\n");
//         }
//     else {
//         printf("..Fail..\n");
//     }
// }

// Q10:
// int main () {
//     int x = 5, y = 3;
//     int z;
//
//    z = (x > y) ? x-- : ++y;
//
//    printf("x=%d, z=%d", x, z);
//
//    return 0;
// }

// Q11:
// int main () {
//     char ch = 'A';
//
//    for (int i = 0; i < 3; i++) { // 0,1,2
//        for (int j = 0; j <= i; j++) {  //
//            printf("%c ", ch); // A BB CCC
//            ch++;
//        }
//        ch++;
//        printf("\n");
//    }
//
//    return 0;
// }



// 二次元配列 - 韩语翻译
int main () {
    char word1[3][20] = { "korea univ", "oop", "os" };
    char word2[3][30] = { "고려대학교", "객체지향프로그래밍", "운영체제" };
    char tmp[3][20];
    for (int i = 0; i < 3; i++) {
        printf("문제: %s 번역하시오!\n", word1[i]);
        scanf ("%s", tmp[i]);

        if (strcmp(tmp[i], word2[i]) == 0)
        printf("OK!\n");
        else
        printf("Fail! Correct answer: %s\n", word2[i]);
    }
    return 0;
}


