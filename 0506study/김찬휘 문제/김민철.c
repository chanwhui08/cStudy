#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

void digi(int X, int i);
void list(int N);
int main(void)
{
    int N;
    int d;
    printf("Input number : ");
    scanf("%d", &N);
    list(N);

    return 0;
}
void digi(int X, int i)
{
    int count = 0;
    int len = 0;
    int d;
    while (1)
    {
        if (X == 0)
            break;
        d = X % 10;
        if (d == 0)
            break;
        if (i % d == 0)
        {
            count++;
        }
        else
            break;
        X = X / 10;
        len++;
    }
    if (len == count && X == 0)
        printf("%d\n", i);
}
void list(int N)
{
    for (int i = 1;i <= N;i++)
    {
        int X = i;

        digi(X, i);
    }
}
