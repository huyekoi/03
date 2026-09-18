#include <stdio.h>

int main(void)
{
    int numerator;
    int denominator;
    float result;

    printf("분자를 입력하세요 : ");
    scanf("%d", &numerator);

    printf("분모를 입력하세요 : ");
    scanf("%d", &denominator);

    result = (float)numerator / denominator;

    printf("나누기의 결과는 %f 입니다.\n", result);

    return 0;
}
