//Author: Alexander G.

#include <stdio.h>

int recursiontest(int num);
int main() {
    int number, result;
    printf("Enter b_day date in YYYYMMDD format: ");
    scanf("%d", &number);
    result = recursiontest(number);
    printf("Sum of digits you've entered: %d\n", result);
    return 0;
}
int recursiontest(int num)
{
    if (num != 0)
    {
        return (num % 10 + recursiontest(num / 10));
    }
    else
    {
       return 0;
    }
}
