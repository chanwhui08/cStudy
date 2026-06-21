#include <stdio.h>

void insert_sort(int *arr, int size);
void print_array(int *arr, int size);

int main(void)
{
    int arr[5] = {5, 3, 2, 1, 4};
    int size;

    size = sizeof(arr) / sizeof(int);

    insert_sort(arr, size);
    print_array(arr, size);

    return 0;
}

void insert_sort(int *arr, int size)
{
    int c_value; // 현재 삽입할 값
    int c_idx;

    for(int i = 1; i < size; i++)
    {
        c_value = arr[i];
        c_idx = i - 1;

        while(c_idx >= 0 && arr[c_idx] > c_value)
        {
            arr[c_idx + 1] = arr[c_idx];
            c_idx--;
        }

        arr[c_idx + 1] = c_value;
    }
}

void print_array(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}