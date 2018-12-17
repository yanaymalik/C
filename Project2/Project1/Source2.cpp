//#include <stdio.h> /*ספריות*/
//#include <conio.h>
//#include <stdlib.h>
//#define SIZE 10 /*גודל המערך*/

//void fillArr(int arr[]) /*פונקציה למילוי מערך*/
//{
//	int i;
//	printf("Please enter 10 integers\n");
//	for (i = 0; i < SIZE; i++)  /*לולאה לקליטת ערכים לתוך המערך*/
//		scanf_s("%d", &arr[i]);
//}
//void arrangedArr(int arr[], int brr[]) /*פונקציה לסידור המערך*/
//{
//	int i, j = 0;
//	for (i = 0; i < SIZE; i++) /*לולאה לבדיקת עם המספר שלילי*/
//	{
//		if (arr[i] < 0)
//			brr[j++] = arr[i];
//	}
//	for (i = 0; i < SIZE; i++) /*לולאה לבדיקת עם המספר חיובי*/
//	{
//		if (arr[i] > 0)
//			brr[j++] = arr[i];
//	}
//	printf("The array is organized\n");
//}
//void bigArr(int arr[], int brr[], int crr[]) /*פונקציה לבדיקת איזה מספר גדול יותר*/
//{
//	int i;
//	for (i = 0; i < SIZE; i++) /*לולאה לבדיקה בין שני המערכים*/
//		 if(arr[i] > brr[i]) /* arr[i] > brr[i] תנאי ראשון אם*/
//			crr[i] = arr[i]; 
//		else if (arr[i] == brr[i]) /* arr[i] = brr[i] תנאי שני אם*/
//			crr[i] = 0;
//		else                      /* arr[i] < brr[i] תנאי שלישי אם*/
//			crr[i] = brr[i];
//	printf("Array with the highest numbers\n");
//}
//void printArr(int arr[]) /*פונקציה להדפסת מערך*/
//{
//	int i;
//	for (i = 0; i < SIZE; i++) /* לולאה להדפסת מערך*/
//		printf("%3d", arr[i]);
//	printf("\n");
//	printf("\n");
//}
//void main() /*תוכנית ראשית*/
//{
//	int arr[SIZE], brr[SIZE] = { 0 }, crr[SIZE] = { 0 }; /*הגדרת מערכים*/
//	/*קריאות לפנוקציות*/
//	fillArr(arr); /*פונקציה למילוי מערך*/
//	system("CLS"); /*פונקציה לניקוי מסך*/
//	printf("The first array\n");
//	printArr(arr); /*פונקציה להדפסת מערך*/
//	arrangedArr(arr, brr);/*פונקציה לסידור מערך*/
//	printArr(brr); /*פונקציה להדפסת מערך*/
//	bigArr(arr, brr, crr); /*פונקציה לבדיקת איזה מספר גדול יותר*/
//	printArr(crr);  /*פונקציה להדפסת מערך*/
//	_getch();
//}