//#include <stdio.h> /*������*/
//#include <conio.h>
//#include <stdlib.h>
//#define SIZE 10 /*���� �����*/

//void fillArr(int arr[]) /*������� ������ ����*/
//{
//	int i;
//	printf("Please enter 10 integers\n");
//	for (i = 0; i < SIZE; i++)  /*����� ������ ����� ���� �����*/
//		scanf_s("%d", &arr[i]);
//}
//void arrangedArr(int arr[], int brr[]) /*������� ������ �����*/
//{
//	int i, j = 0;
//	for (i = 0; i < SIZE; i++) /*����� ������ �� ����� �����*/
//	{
//		if (arr[i] < 0)
//			brr[j++] = arr[i];
//	}
//	for (i = 0; i < SIZE; i++) /*����� ������ �� ����� �����*/
//	{
//		if (arr[i] > 0)
//			brr[j++] = arr[i];
//	}
//	printf("The array is organized\n");
//}
//void bigArr(int arr[], int brr[], int crr[]) /*������� ������ ���� ���� ���� ����*/
//{
//	int i;
//	for (i = 0; i < SIZE; i++) /*����� ������ ��� ��� �������*/
//		 if(arr[i] > brr[i]) /* arr[i] > brr[i] ���� ����� ��*/
//			crr[i] = arr[i]; 
//		else if (arr[i] == brr[i]) /* arr[i] = brr[i] ���� ��� ��*/
//			crr[i] = 0;
//		else                      /* arr[i] < brr[i] ���� ����� ��*/
//			crr[i] = brr[i];
//	printf("Array with the highest numbers\n");
//}
//void printArr(int arr[]) /*������� ������ ����*/
//{
//	int i;
//	for (i = 0; i < SIZE; i++) /* ����� ������ ����*/
//		printf("%3d", arr[i]);
//	printf("\n");
//	printf("\n");
//}
//void main() /*������ �����*/
//{
//	int arr[SIZE], brr[SIZE] = { 0 }, crr[SIZE] = { 0 }; /*����� ������*/
//	/*������ ���������*/
//	fillArr(arr); /*������� ������ ����*/
//	system("CLS"); /*������� ������ ���*/
//	printf("The first array\n");
//	printArr(arr); /*������� ������ ����*/
//	arrangedArr(arr, brr);/*������� ������ ����*/
//	printArr(brr); /*������� ������ ����*/
//	bigArr(arr, brr, crr); /*������� ������ ���� ���� ���� ����*/
//	printArr(crr);  /*������� ������ ����*/
//	_getch();
//}