#include <stdio.h>

int main()
{
    int mul = 0;
    int num = 0;

    printf("Enter a integer: ");
    scanf("%d", &num);
    for(int mulFac =1; mulFac <= 10; mulFac++)
    {
        mul = num * mulFac;
        printf("%d * %d : %d \n", num, mulFac, mul);
    }
    return 0;
}