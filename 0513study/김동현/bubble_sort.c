#include <stdio.h>
void print_array(int *arr, int size);
void swap(int *int_a, int* int_b);
void bubble_sort(int* arr, int size);
int main(void)
{
    int arr[5] = {5, 3, 2, 1, 4};
    int size;
    size = sizeof(arr) / sizeof(int);

    bubble_sort(arr, size);
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

void bubble_sort(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
