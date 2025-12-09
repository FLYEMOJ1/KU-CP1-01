// Factorial Calculation

#include <stdio.h>

fact (int num){
    int sum = 1;
    if (num == 0 || num == 1)
        return 1;
    else
        for(int i = 1; i <= num; i++){
            sum *= i;
        }
    return sum;
}

int main() {
    int result, inN;
    printf("Factorial Calc: ");
    scanf("%d", &inN);

    result = fact(inN);
    printf("%d\n", result);
    return 0;
}