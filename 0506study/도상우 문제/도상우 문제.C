#include <stdio.h>

int compareScore(int prev, int current)
{
    if (current > prev)
    {
        return 1;
    }
    else if (current < prev)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    int scores[100];

    int up = 0;
    int down = 0;
    int same = 0;

    printf("input N : ");
    scanf("%d", &n);

    printf("input score : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int result = compareScore(scores[i - 1], scores[i]);

        if (result == 1)
        {
            up++;
        }
        else if (result == -1)
        {
            down++;
        }
        else
        {
            same++;
        }
    }

    printf("up: %d\n", up);
    printf("down: %d\n", down);
    printf("same: %d\n", same);

    return 0;
}