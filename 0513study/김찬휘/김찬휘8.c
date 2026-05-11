#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void printArr(int* arr, int num);
void userNum(int* num);
void userArr(int* arr, int num);
void selectionSort(int* arr, int num);



int main(void) {

	int user_num;
	int user_arr[100];
	userNum(&user_num);
	userArr(user_arr, user_num);
	selectionSort(user_arr, user_num);
	printArr(user_arr, user_num);

	



	
	return 0;
}
void printArr(int* arr, int num) {
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
}
void userNum(int* num) {
	printf("Input Array count : ");
	scanf("%d", num);
	if (*num < 1 || *num>100)
		userNum(num);
}
void userArr(int* arr, int num) {
	printf("Input Array number : ");
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
}

void selectionSort(int* arr, int num) {
	for (int i = 0; i < num-1; i++) {
		int min = i;
		for (int j = i+1; j < num; j++) {	
			if (arr[min] > arr[j])
				min=j;
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;

	}
}
