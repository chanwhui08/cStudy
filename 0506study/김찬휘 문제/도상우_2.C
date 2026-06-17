#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N = 0;
    int i,j;
    int K;
    int max, min;
    
    scanf("%d", &N);

    int arr[N] = {0};

    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<N; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }


    return 0;
}