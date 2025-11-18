#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Car {
    int carNumber;
    double gas;
};

void show(struct Car c)
{
    printf(">> Car Number: %d, Gas: %.2f\n", c.carNumber, c.gas);
};

int main() {
    struct Car car={ 1234, 20.5 };
    printf("Car Number: ");
    scanf("%d", &((struct Car*)0)->carNumber);
    printf("Gas: ");
    scanf("%lf", &((struct Car*)0)->gas);

    sizeof(struct Car); // to avoid warning
    return 0;
}
