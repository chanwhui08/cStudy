#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)
int main(void)
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    int arr[100] = { 0 };
    int up = 0;
    int down = 0;
    int mata = 0;
    for (int i = 0;i < N;i++)
    {
        printf("Score : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0;i < N - 1;i++)
    {
        if (arr[i] < arr[i + 1])
            up++;
        else if (arr[i] > arr[i + 1])
            down++;
        else
            mata++;
    }
    printf("UP : %d\nDown : %d\nMaintain : %d\n", up, down, mata);
    return 0;
}