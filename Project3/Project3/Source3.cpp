//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROW 5
//#define COL 5
//
//void arrangeArr(int arr[][COL]);
//void fillArr(int arr[][COL]);
//void printArr(int arr[][COL]);
//void Find(int arr[][COL]);
//void findBin(int arr[][COL]);
//
//void main()
//{
//	int arr[ROW][COL] = { {0}, {0} };
//	fillArr(arr);
//	printArr(arr);
//	arrangeArr(arr);
//	printArr(arr);
//	Find(arr);
//	findBin(arr);
//	_getch();
//}
//void fillArr(int arr[][COL])
//{
//	int i, j;
//	srand(time(NULL));
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//			arr[i][j] = rand() % 100;
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
//	printf("\n");
//}
//void arrangeArr(int arr[][COL])
//{
//	int i, j, temp;
//	for (int x = 0; x < ROW * COL; x++)
//	{
//		for (i = 0; i < ROW; i++)
//			for (j = 0; j < COL; j++)
//			{
//				if (arr[i][j] > arr[i][j + 1] && j < COL - 1)
//				{
//					temp = arr[i][j + 1];
//					arr[i][j + 1] = arr[i][j];
//					arr[i][j] = temp;
//				}
//				if (arr[i][j] > arr[i + 1][0] && i < ROW - 1)
//				{
//					temp = arr[i][j];
//					arr[i][j] = arr[i + 1][0];
//					arr[i + 1][0] = temp;
//				}
//			}
//	}
//
//
//}
//void Find(int arr[][COL])
//{
//	int i, j,numToFind;
//	printf("select a number");
//	scanf_s("%d",&numToFind);
//	for (i = 0; i < ROW; i++)
//		for (j = 0; j < COL; j++)
//		{
//			if (arr[i][j]== numToFind)
//			{
//				printf("%d at col %d row %d",arr[i][j],j+1,i+1);
//				 arr[i][j];
//				 return;
//			}
//		}
//}
//void findBin(int arr[][COL])
//{
//
//}