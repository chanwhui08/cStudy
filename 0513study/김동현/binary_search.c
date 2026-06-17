#include <stdio.h>

int binary_search(int *arr, int start, int end, int size, int target);
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size;
    size = sizeof(arr) / sizeof(int);

    printf("%d\n", binary_search(arr, 0, size - 1, size, 5));
    return 0;
}

int binary_search(int *arr, int start, int end, int size, int target)
{
    int center;
    int value;

    while(1)
    {

        if(start > end)
        {
            value = -1;
            break;
        }

        center = (start + end) / 2; 

        if(arr[center] == target)
        {
            value = center;
            break;
        }
        else if(arr[center] > target)
        {
              end = center - 1;    
        }
        else
        {
            start = center + 1;
        }
    }
    return value;
}