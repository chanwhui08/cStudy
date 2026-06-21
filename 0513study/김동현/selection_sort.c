#include <stdio.h>
void print_array(int *arr, int size);
void swap(int *int_a, int* int_b);
void selection_sort(int *arr, int size);
int main(void)
{
    int arr[5] = {5, 3, 2, 1, 4};
    int size;
    size = sizeof(arr) / sizeof(int);

    selection_sort(arr, size);
    print_array(arr, size);
    return 0;
}
void print_array(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *int_a, int* int_b)
{
    int temp = *int_a;
    *int_a = *int_b;
    *int_b = temp;
}

void selection_sort(int *arr, int size)
{
    int min_idx;
    
    for(int i = 0; i < size; i++)
    {
        min_idx = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        swap(&arr[i], &arr[min_idx]);
    }
    
}
