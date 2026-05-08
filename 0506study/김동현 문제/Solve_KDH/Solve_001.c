//#include <stdio.h>
//
//#define MAX 100
//
//void print_array(int arr[], int size);
//void input_array(int arr[], int size);
//void check_array(int arr[], int size, int* increase, int* drop, int* keep);
//
//int main(void)
//{
//    // 상우 문제 1번
//    int input_time;
//    int student_score[MAX];
//
//    int increase;
//    int drop;
//    int keep;
//
//    printf("Input Time : ");
//    if (scanf_s("%d", &input_time) != 1)
//    {
//        printf("Input Failure\n");
//        return 1;
//    }
//
//    if (input_time <= 0 || input_time > MAX)
//    {
//        printf("Invalid Size\n");
//        return 1;
//    }
//
//    input_array(student_score, input_time);
//
//    check_array(student_score, input_time, &increase, &drop, &keep);
//
//    printf("increase : %d\n", increase);
//    printf("drop : %d\n", drop);
//    printf("keep : %d\n", keep);
//
//    // print_array(student_score, input_time);
//
//    return 0;
//}
//
//void print_array(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//void input_array(int arr[], int size)
//{
//    printf("Input Student Score : ");
//
//    for (int i = 0; i < size; i++)
//    {
//        if (scanf_s("%d", &arr[i]) != 1)
//        {
//            printf("Input Failure\n");
//            return;
//        }
//    }
//}
//
//void check_array(int arr[], int size, int* increase, int* drop, int* keep)
//{
//    *increase = 0;
//    *drop = 0;
//    *keep = 0;
//
//    for (int i = 0; i < size - 1; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            (*drop)++;
//        }
//        else if (arr[i] < arr[i + 1])
//        {
//            (*increase)++;
//        }
//        else
//        {
//            (*keep)++;
//        }
//    }
//}