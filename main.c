#include <stdio.h>

int main(void)
{
    char c;

    printf("enter an character : ");
    scanf("%c", &c);

    printf("the next character of %c is %c\n", c, c + 1);

    return 0;
}
