//#include <stdio.h> /*������*/
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
//void arrangeArr(int arr[]) //������� ������ �����
//{
//	int i, temp; //����� ������
//	for (i = 0; i < SIZE; i += 2) //����� ������ ������
//	{
//		temp = arr[i]; /* ����� ����� ������ ����*/
//		arr[i] = arr[i + 1]; /* ����� ��� ������ ������� ������*/
//		arr[i + 1] = temp; /*����� �� ������ ������ ������*/
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