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
// int main () {
//     char word1[3][20] = { "korea univ", "oop", "os" };
//     char word2[3][30] = { "고려대학교", "객체지향프로그래밍", "운영체제" };
//     char tmp[3][20];
//     for (int i = 0; i < 3; i++) {
//         printf("문제: %s 번역하시오!\n", word1[i]);
//         scanf ("%s", tmp[i]);
// 
//         if (strcmp(tmp[i], word2[i]) == 0)
//         printf("OK!\n");
//         else
//         printf("Fail! Correct answer: %s\n", word2[i]);
//     }
//     return 0;
// }

// Array 三次元排列
// 3面 4行 5列排序定义
// 一个面 每20个整数 以 二次元排列输出
// 当 1面 输出完毕后 空一行
// 整数 从11开始 以11递增

// int main() {
//     int ary[3][4][5]; // 3面 4行 5列 排序定义
//     int i, j, k, cnt = 11; // 整数 从11开始 以11递增
// 
//     for (i = 0; i < 3; i++) { // 面
//         for (j = 0; j < 4; j++) { // 行
//             for (k = 0; k < 5; k++) { // 列
//                 ary[i][j][k] = cnt; // 赋值
//                 cnt ++; // 以1递增
//             }
//         }
//     }
// 
//     for (i = 0; i < 3; i++) { // 面
//         printf("%d면 2차원 배열\n", i + 1); // 输出 面编号
//         for (j = 0; j < 4; j++) { // 行
//             for (k = 0; k < 5; k++) { // 列
//                 printf("%d", ary[i][j][k]); // 输出数组元素
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/// Array 실습 1 - 3차원 배열 응용 - 1
// 3차원 배열로 2개의 면을 만들어 1면에는 정수 "1"만 출력하고 2면에는 정수 "2"만
// 2차원 배열 4행 3열을 출력
// 1면이 끝나면 줄 바꿈
// 각 행의 열에는 "/t"를 이용하여 공백을 추가
// int main() {
//     int array[2][4][3];
//     for (int i = 0; i<2; i++) { // 면
//         for (int j = 0; j<4; j++) { // 행
//             for (int k = 0; k<3; k++) { // 열
//                 array[i][j][k] = i + 1; // 赋值
//             }
//         }
//     }
//
//     for (int i = 0; i<2; i++) { // 면
//         for (int j = 0; j<4; j++) { // 행 (fixed: changed back to 4)
//             for (int k = 0; k<3; k++) { // 열
//                 printf("%d\t", array[i][j][k]); // 输出数组元素
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
//     return 0;
// }

/// Array 실습 2 - 3차원 배열 응용 - 2
// 3차원 배열로 2개의 면을 만들어 1면에는 정수 “0”만 출력하고 2면에는 정수 “3”만
// 출력하는 프로그램을 코딩하시오. (조건은 아래와 같다.)
// @ 2차원 배열 4행 3열을 출력
// @ 1면이 끝나면 줄 바꿈
// @ 각 행의 열에는 “/t”를 이용하여 공백을 추가



// ch07 contents. Array and String

int main() {
//     char str1[5] = { "K", "O", "R", "E", "A" };
//     char str2[5] = { "K", "O", "R", "E", "A" }; // Garbage Value
// 
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);
    char str1[] = "KOREA";
    char* str2 = "KOREA";

    printf("%d, %d", sizeof(str1), sizeof(str2));

    return 0;
}