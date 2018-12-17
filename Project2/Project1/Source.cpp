//#include <stdio.h> /*ספריות*/
//#include <conio.h>
//#include <stdlib.h>
//#include <time.h>
//#define SIZE 10
//void fillArr(int arr[])
//{
//	int i;
//	srand(time(NULL));
//	for (i = 0; i < SIZE; i++)
//		arr[i] = rand() % 10;
//}
//void printArr(int arr[])
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		printf("%d", arr[i]);
//	printf("\n");
//}
//void arrangeArr(int arr[]) //פונקציה לסידור המערך
//{
//	int i, temp; //הגדרת משתנים
//	for (i = 0; i < SIZE; i += 2) //לולאה להחלפת הזוגות
//	{
//		temp = arr[i]; /* שמירת המספר במשתנה זמני*/
//		arr[i] = arr[i + 1]; /* החלפה בין הכתובת הראשונה לשנייה*/
//		arr[i + 1] = temp; /*שמירה של הכתובת הרשונה בשנייה*/
//	}
//	for (i = 0; i<SIZE; i++)
//		printf("%d", arr[i]);
//}
//void main()
//{
//	int arr[SIZE], i;
//	fillArr(arr);
//	printArr(arr);
//	arrangeArr(arr);
//	_getch();
//}