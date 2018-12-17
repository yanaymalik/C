//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROW 4
//#define COL 4
//void fillArr(int arr[][COL])
//{
//	int i, j;
//	srand(time(NULL));
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//			arr[i][j] = rand() % 10;
//	}
//}
//void printArr(int arr[][COL])
//{
//	int i, j;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//			printf("%3d", arr[i][j]);
//		printf("\n");
//	}
//}
//int checkArr(int arr[][COL])
//{
//	int i, j;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if (arr[i][j] % 2 == 0)
//				return 1;
//			else
//				return 0;
//		}
//	}
//}
//void arrangeArr(int arr[][COL])
//{
//	int i, j, newArr[ROW][COL] = { 0 };
//	for (i = 0; i < ROW; i++)
//	{
//		if (i % 2 != 0)
//		{
//			for (j = 0; j < COL; j++)
//			{
//				newArr[i][j] = arr[i][COL - 1 - j];
//			}
//		}
//		else
//			for (j = 0; j < COL; j++)
//				newArr[i][j] = arr[i][j];
//
//	}
//	printArr(newArr);
//}
//void main()
//{
//	int arr[ROW][COL], answer;
//	fillArr(arr);
//	printArr(arr);
//	answer = checkArr(arr);
//	if (answer == 1)
//		printf("All numbers in the array are double\n");
//	else
//		printf("The array has an odd number\n");
//	arrangeArr(arr);
//	_getch();
//}