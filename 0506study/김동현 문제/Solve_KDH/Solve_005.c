//#include <stdio.h>
//
//#define SIZE 7
//
//int checked_sequence(int* arr, int* c_arr, int* v_arr, int size);
//void print_array(int* v_arr, int* c_arr, int size);
//
//int main(void)
//{
//	int array[SIZE];
//	int arr_count[SIZE] = { 0 };
//	int arr_value[SIZE] = { 0 };
//	int arr_size;
//	
//	printf("input number 7EA : ");
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (scanf_s("%d", &array[i]) != 1)
//		{
//			printf("input failure\n");
//			return 1;
//		}
//	}
//
//	arr_size = checked_sequence(array, arr_count, arr_value, SIZE);
//
//	print_array(arr_value, arr_count, arr_size);
//}
//
//int checked_sequence(int* arr, int* c_arr, int* v_arr, int size)
//{
//	int check_index = 0;
//	
//	v_arr[0] = arr[0];
//	c_arr[0] = 1;
//
//	for (int i = 1; i < size; i++)
//	{
//		if (arr[i] == arr[i - 1])
//		{
//			c_arr[check_index]++;
//		}
//		else
//		{
//			check_index++;
//			v_arr[check_index] = arr[i];
//			c_arr[check_index] = 1;
//		}
//	}
//	return check_index + 1;
//}
//void print_array(int* v_arr, int* c_arr, int size)
//{
//	printf("------ array print ------\n");
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d(%d) ", v_arr[i], c_arr[i]);
//	}
//	printf("\n");
//}
