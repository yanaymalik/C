

#include < stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct STUDENT {

	int id;
	char name[256];
	int age; 

	struct STUDENT *next;

};

STUDENT *makeNode(int id, int age, char name[])
{
	STUDENT *temp = (STUDENT *)malloc(sizeof(STUDENT));

	if (!temp)
		return NULL;

	temp->age = age; 
	temp->id = id;
	strcpy_s(temp->name, name);

	temp->next = NULL;

	return temp;

}

void addLast(STUDENT *head, STUDENT *temp)
{

	STUDENT *current = head; 

	while (current->next)
	{
		current = current->next;
	}

	current->next = temp; 

}

void max_age_student(STUDENT *head)
{
	int max = 0; 
	STUDENT *current = head; 
	STUDENT *max_age;

	while (current)
	{
		if (max < current->age)
		{
			max = current->age;
			max_age = current;
		}
		current = current->next;
	}

	printf("%d %d \n", max_age->age, max_age->id);
	puts(max_age->name);

}

void main()
{
	STUDENT *head;
	STUDENT *temp;

	int age, id, i;
	char name[256];

	printf("enter id\n");
	scanf_s("%d", &id);
	printf("enter age\n");
	scanf_s("%d", &age);
	printf("enter name\n");
	gets_s(name);

	head = makeNode(id, age, name);

	for (i = 0; i < 30; i++)
	{
		printf("enter id\n");
		scanf_s("%d", &id);
		printf("enter age\n");
		scanf_s("%d", &age);
		printf("enter name\n");
		gets_s(name);

		temp = makeNode(id, age, name);

		addLast(head, temp);

	}



}