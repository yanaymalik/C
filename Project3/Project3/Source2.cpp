//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROW 3
//#define COL 3
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
//int checkArr(int arr[][COL])
//{
//	int i, j;
//	for (i = 0; i < ROW; i++)
//		for (j = 0; j < COL; j++)
//			if (arr[i][j] != arr[j][i])
//				return 0;
//
//	return 1;
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
//	printf("\n");
//}
//void arrangeArr(int arr[][COL])
//{
//	int i, j, newArr[ROW][COL] = { 0 };
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			newArr[i][j] = arr[j][i];
//		}
//
//	}
//	printArr(newArr);
//}
//void main()
//{
//	int arr[ROW][COL], answer;
//	fillArr(arr);
//	printArr(arr);
//	arrangeArr(arr);
//	answer = checkArr(arr);
//	if (answer == 1)
//		printf("The array is not symmetrical\n");
//	else
//		printf("The array is symmetrical\n");
//	_getch();
//}