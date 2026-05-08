//#include <stdio.h>
//
//#define TRUE 1
//#define FALSE 0
//
//int checked_number(int number);
//void print_number(int number);
//
//int main(void)
//{
//    int input_number;
//
//    printf("input user number : ");
//
//    // 입력 오류 예외 처리
//    if (scanf_s("%d", &input_number) != 1)
//    {
//        printf("input failure\n");
//        return 1;
//    }
//
//    // 범위 검사
//    if (!(input_number > 0 && input_number <= 100))
//    {
//        printf("Value out of range\n");
//        return 1;
//    }
//
//    print_number(input_number);
//
//    return 0;
//}
//
//int checked_number(int number)
//{
//    int temp;
//    int digit;
//    int digit_sum = 0;
//
//    for (temp = number; temp > 0; temp /= 10)
//    {
//        digit_sum += temp % 10;
//    }
//
//    if (number % digit_sum != 0)
//    {
//        return FALSE;
//    }
//
//    for (temp = number; temp > 0; temp /= 10)
//    {
//        digit = temp % 10;
//        if (digit == 0 || number % digit != 0)
//        {
//            return FALSE;
//        }
//    }
//
//    return TRUE;
//}
//
//void print_number(int number)
//{
//    printf("Number that matches the condition : ");
//
//    for (int i = 1; i <= number; i++)
//    {
//        if (checked_number(i))
//        {
//            printf("%d ", i);
//        }
//    }
//
//    printf("\n");
//}