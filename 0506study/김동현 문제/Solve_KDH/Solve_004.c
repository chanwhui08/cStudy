//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX 1000
//int section_search(int* arr, int size);
//int main(void)
//{
//    int input_number;
//    int number_arr[MAX];
//
//	printf("input user number : ");
//
//    // 입력 오류 예외 처리
//    if (scanf_s("%d", &input_number) != 1)
//    {
//        printf("input failure\n");
//        return 1;
//    }
//    // 범위 검사
//    if (!(input_number >= 1 && input_number <= 1000))
//    {
//        printf("Value out of range\n");
//        return 1;
//    }
//    printf("input number %dEA : ", input_number);
//    for (int i = 0; i < input_number;i++)
//    {
//        if (scanf_s("%d", &number_arr[i]) != 1)
//        {
//            printf("input failure\n");
//            return 1;
//        }
//    }
//
//    printf("Number of sections that meet the conditions : %d\n", section_search(number_arr, input_number));
//	return 0;
//}
//
//int section_search(int* arr, int size)
//{
//    int max;
//    int min;
//    int sum;
//    int len;
//    int count = 0;
//    for (int i = 0; i < size; i++)
//    {
//        max = arr[i];
//        min = arr[i];
//        sum = 0;
//        for (int j = i; j < size; j++)
//        {
//            if (arr[j] > max)
//                max = arr[j];
//
//            if (arr[j] < min)
//                min = arr[j];
//
//            sum += arr[j];
//            len = j - i + 1;
//           
//            if (sum % len == 0 && (max - min) <= (sum /len))
//            {
//                count++;
//            }
//        }
//    }
//    return count;
//}