#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 4
#define COL 4 

void fillArr(int arr[][COL]);
void printArr(int arr[][COL]);
void checkArr(int arr[][COL]);

void main()
{
	int arr[ROW][COL];
	fillArr(arr);
	printArr(arr);
	checkArr(arr);
	_getch();
}
void fillArr(int arr[][COL])
{
	int i, j;
	srand(time(NULL));
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			arr[i][j] = rand() % 10;
	}
}
void printArr(int arr[][COL])
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
void checkArr(int arr[][COL])
{
	int i, j, diagonal, maxDiagonal = 0, sumDiagonal = 0, indexDiagonal;
	for (diagonal = 0; i < (ROW + COL) - 1; diagonal++)
	{
		for (i = 0; i < ROW; i++)
		{
			for (j = 0; j < COL; j++)
			{
				if (i + j == diagonal)
					sumDiagonal += arr[i][j];
				printf("%4d", arr[i][j]);
			}
		}
	}
	if (sumDiagonal > maxDiagonal)
	{
		maxDiagonal = sumDiagonal;
		indexDiagonal = diagonal - 1;
	}

}
