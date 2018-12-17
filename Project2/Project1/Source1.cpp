//#include <stdio.h> //ספריות
//#include <conio.h>
//#include <math.h>
//#include <stdlib.h>
//#define SIZE 10
//void fillArr(int arr[])
//{
//	int i;
//	printf("enter 10 int numbers\n");
//	for (i = 0; i < SIZE; i++)
//		scanf_s("%d", &arr[i]);
//}
//void printArr(int arr[])
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		printf("%d", arr[i]);
//	printf("\n");
//}
//int equalArr(int arr[]) //פונקציה לבדיקה שכל המספרים שווים
//{
//	int i = 0, temp = arr[i]; //הגדרת משתנים
//	for (i = 1; i < SIZE; i++) //לולאה 
//	{
//		if (arr[i] == temp)
//			return true;
//		else
//			return false;
//	}
//}
//int primeArr(int arr[]) //פונקציה לסידור המערך
//{
//	int i; //הגדרת משתנים
//	for (i = 1; i < SIZE; i++) //לולאה 
//	{
//		if ((arr[i] % arr[i] == 0) && (arr[i] % 2 != 0))
//			return true;
//		else
//			return false;
//	}
//}
//void checkArr(int arr[])
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		if (arr[i] < 0)
//		{
//			arr[i] *= -1;
//			printf("%d) %.2f\t\n", i + 1, sqrt((float)arr[i]));
//		}
//		else
//			printf("%d) %.2f\t\n", i+1, pow((float)arr[i],3));
//}
//void main()
//{
//	int arr[SIZE], i, answer;
//	fillArr(arr);
//	system("CLS");
//	printArr(arr);
//	answer = equalArr(arr);
//	if (answer)
//		printf("All numbers are equal\n");
//	else
//		printf("The numbers are not equal\n");
//	answer = primeArr(arr);
//	if (answer)
//		printf("In the array there is a prime number\n");
//	else
//		printf("There is no prime number in the array\n");
//	checkArr(arr);
//	_getch();
//}