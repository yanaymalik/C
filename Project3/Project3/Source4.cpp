//#include <stdio.h>
//#include <conio.h>
//#define ROW 3
//#define COL 3
//int checkArr(int arr[][COL]);
//
//void main()
//{
//	int  arr[ROW][COL] = { {8,1,6} , {3,5,7} , {4,9,2} };
//	if (checkArr(arr) == 1)
//		printf("The matrix is Magic Square\n");
//	else
//		printf("The matrix is not magic Square\n");
//	_getch();
//}
//int checkArr(int arr[][COL])
//{
//	int i, j, temp = 0, diagonal = 0, line, column;
//	for (i = 0; i < ROW; i++)
//		for (j = 0; j < COL; j++)
//		{
//			if (i == j)
//				temp = +arr[i][j];
//			if (i + j == ROW - 1)
//				diagonal = +arr[i][j];
//		}
//	if (diagonal == temp)
//	{
//		for (i = 0; i < ROW; i++)
//			for (j = 0; j < COL; j++)
//			{
//				line = 0;
//				column = 0;
//				line += arr[i][j];
//				column += arr[j][i];
//				if ((diagonal != line) && (diagonal != column))
//				{
//					return 0;
//				}
//				else; 
//				return 1;
//			}
//		
//	}
//}