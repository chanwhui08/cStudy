//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define TRUE 1
//#define FALSE 0
//
//int set_computer_number();
//int my_pow(int bottom, int exponent);
//int checked_duplication(int check_number); //참거짓 반환을 위해 int형
//int checked_baseball(int c_number, int u_number);
//void separate_number(int* arr, int number);
//
//int main(void)
//{
//	int com_number;
//	int user_number;
//
//	com_number = set_computer_number();
//	printf("%d\n", com_number);
//
//	while (TRUE)
//	{	
//		printf("input user number : ");
//		//입력오류 예외처리
//		if (scanf_s("%d", &user_number) != 1)
//		{
//			printf("Input Failure\n");
//			break;
//		}
//		//범위 예외처리
//		if (!(user_number >= 100 && user_number <= 999))
//		{
//			printf("Value out of range\n");
//			continue;
//		}
//
//		if (!checked_duplication(user_number))
//		{
//			printf("user number is duplication\n");
//			continue;
//		}
//		
//		if (checked_baseball(com_number, user_number))
//		{
//			break;
//		}
//	}
//	return 0;
//}
//int set_computer_number()
//{
//	int random_number;
//
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		//100 ~ 999까지 범위
//		random_number = rand() % 900 + 100;
//	} while (!checked_duplication(random_number));
//
//	return random_number;
//}
//
//int checked_duplication(int check_number)
//{
//	int check_arr[3];
//	int is_checked = TRUE;
//	separate_number(check_arr, check_number);
//
//	for (int i = 0; i < 3;i++)
//	{
//		for (int j = i + 1; j < 3; j++)
//		{
//			if (check_arr[i] == check_arr[j])
//			{
//				is_checked = FALSE;
//			}
//		}
//	}
//	return is_checked;
//}
//
//int checked_baseball(int c_number, int u_number)
//{
//	int c_arr[3];
//	int u_arr[3];
//
//	int strike = 0;
//	int ball = 0;
//
//	//컴퓨터 숫자 자리수 분
//	separate_number(c_arr, c_number);
//	separate_number(u_arr, u_number);
//
//	//모든 자리 비교
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (c_arr[i] == u_arr[j])
//			{
//				if (i == j)
//					strike++;
//				else
//					ball++;
//			}
//		}
//	}
//
//	printf("%dSTRIKE %dBALL\n", strike, ball);
//
//	//정답 여부 반환
//	if (strike == 3)
//	{
//		return TRUE;
//	}
//
//	return FALSE;
//}
//
//int my_pow(int bottom, int exponent)
//{
//	int square = 1;
//	for (int i = 0; i < exponent; i++)
//	{
//		square *= bottom;
//	}
//	return square;
//}
//void separate_number(int *arr, int number)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		arr[i] = (number / my_pow(10, 2 - i)) % 10;
//	}
//}#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define TRUE 1
//#define FALSE 0
//
//int set_computer_number();
//int my_pow(int bottom, int exponent);
//int checked_duplication(int check_number); //참거짓 반환을 위해 int형
//int checked_baseball(int c_number, int u_number);
//void separate_number(int* arr, int number);
//
//int main(void)
//{
//	int com_number;
//	int user_number;
//
//	com_number = set_computer_number();
//	printf("%d\n", com_number);
//
//	while (TRUE)
//	{	
//		printf("input user number : ");
//		//입력오류 예외처리
//		if (scanf_s("%d", &user_number) != 1)
//		{
//			printf("Input Failure\n");
//			break;
//		}
//		//범위 예외처리
//		if (!(user_number >= 100 && user_number <= 999))
//		{
//			printf("Value out of range\n");
//			continue;
//		}
//
//		if (!checked_duplication(user_number))
//		{
//			printf("user number is duplication\n");
//			continue;
//		}
//		
//		if (checked_baseball(com_number, user_number))
//		{
//			break;
//		}
//	}
//	return 0;
//}
//int set_computer_number()
//{
//	int random_number;
//
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		//100 ~ 999까지 범위
//		random_number = rand() % 900 + 100;
//	} while (!checked_duplication(random_number));
//
//	return random_number;
//}
//
//int checked_duplication(int check_number)
//{
//	int check_arr[3];
//	int is_checked = TRUE;
//	separate_number(check_arr, check_number);
//
//	for (int i = 0; i < 3;i++)
//	{
//		for (int j = i + 1; j < 3; j++)
//		{
//			if (check_arr[i] == check_arr[j])
//			{
//				is_checked = FALSE;
//			}
//		}
//	}
//	return is_checked;
//}
//
//int checked_baseball(int c_number, int u_number)
//{
//	int c_arr[3];
//	int u_arr[3];
//
//	int strike = 0;
//	int ball = 0;
//
//	//컴퓨터 숫자 자리수 분
//	separate_number(c_arr, c_number);
//	separate_number(u_arr, u_number);
//
//	//모든 자리 비교
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (c_arr[i] == u_arr[j])
//			{
//				if (i == j)
//					strike++;
//				else
//					ball++;
//			}
//		}
//	}
//
//	printf("%dSTRIKE %dBALL\n", strike, ball);
//
//	//정답 여부 반환
//	if (strike == 3)
//	{
//		return TRUE;
//	}
//
//	return FALSE;
//}
//
//int my_pow(int bottom, int exponent)
//{
//	int square = 1;
//	for (int i = 0; i < exponent; i++)
//	{
//		square *= bottom;
//	}
//	return square;
//}
//void separate_number(int *arr, int number)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		arr[i] = (number / my_pow(10, 2 - i)) % 10;
//	}
//}