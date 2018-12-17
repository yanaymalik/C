#include <stdio.h>
#define SIZE 10
void fillArr(int arr[])
{
	int i;
	printf("Enter %d int numbers\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter number to place [%d]\n", i + 1);
		scanf_s("%d", &arr[i]);
	}
}
void printArr(int arr[])
{
	int i;
	printf("arr %d int numbers\n", SIZE);
	for (i = 0; i < SIZE; i++)
		printf("%4d is in place [%2d]\n", arr[i], i + 1);
}
void maxArr(int arr[])
{
	int i, place, max = arr[0];
	for (i = 1; i < SIZE; i++)
		if (arr[i] > max)
		{
			max = arr[i];
			place = i+1;
		}
	printf("Max number in arr is %4d in place %d\n", max, place);
}
void minArr(int arr[])
{
	int i, place, min = arr[0];
	for (i = 1; i < SIZE; i++)
		if (arr[i] < min)
		{
			min = arr[i];
			place = i+1;
		}
	printf("Min number in arr is %4d in place %d\n", min, place);
}
void avgArr(int arr[])
{
	int i, sum;
	float avg;
	for (i = 0; i < SIZE; i++)
		sum += arr[i];

	printf("avg is %f.2",(float)sum/SIZE);
}
void main()
{
	int arr[SIZE];
	fillArr(arr);
	printArr(arr);
	maxArr(arr);
	minArr(arr);
	avgArr(arr);
	getchar();
	main();
}