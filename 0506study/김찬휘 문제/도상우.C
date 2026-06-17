#include <stdio.h>

int isValid(int x)
{
    int temp = x;

    while (temp > 0)
    {
        int digit = temp % 10;

        if (digit == 0)
        {
            return 0;
        }

        if (x % digit != 0)
        {
            return 0;
        }

        temp /= 10;
    }

    return 1;
}

int digitSum(int x)
{
    int sum = 0;

    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main()
{
    int N;

    printf("input number : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {

        if (isValid(i))
        {
            printf("%d (자리수 합: %d)\n", i, digitSum(i));
        }
    }

    return 0;
}