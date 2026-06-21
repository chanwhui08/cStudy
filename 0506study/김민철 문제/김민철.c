#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)

int main(void)
{
    int N;
    int randomNumber_1;
    int randomNumber_10;
    int randomNumber_100;
    int randomNumber;
    int arr[3] = { 0 };

    srand((unsigned int)time(NULL));
    while (1)
    {
        randomNumber_1 = rand() % 10;
        randomNumber_10 = rand() % 10;
        randomNumber_100 = rand() % 9 + 1;
        if (randomNumber_100 != randomNumber_10 && randomNumber_10 != randomNumber_1 && randomNumber_100 != randomNumber_1)
        {
            randomNumber = 100 * randomNumber_100 + 10 * randomNumber_10 + randomNumber_1;
            break;
        }
    }
    int all[3] = { randomNumber_1,randomNumber_10,randomNumber_100 };
    while (1)
    {
        int str = 0;
        int bal = 0;
        printf("Input number(100~999) : ");
        scanf("%d", &N);
        if (N == randomNumber)
        {
            printf("Correct!");
            break;
        }
        for (int i = 0;i < 3;i++)
        {
            arr[i] = N % 10;
            N = N / 10;
        }
        for (int i = 0;i < 3;i++)
        {
            for (int j = 0; j < 3;j++)
            {
                if (arr[i] == all[j])
                {
                    if (i == j)
                        str++;
                    else
                        bal++;
                }
            }
        }
        printf("%d Strike, %d Ball\n", str, bal);
    }



    return 0;
}