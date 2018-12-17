#include < stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct NODE {

	int key;
	struct NODE *next;

};


NODE *makeNode(int key)
{
	 NODE *temp = (NODE *)malloc(sizeof(NODE));

	if (!temp)
		return NULL;

	temp->key = key;
	

	temp->next = NULL;

	return temp;

}

void addLast(NODE *head, NODE *temp)
{

	NODE *current = head;

	while (current->next)
	{
		current = current->next;
	}

	current->next = temp;

}

NODE* Reorder(NODE *haed)
{
	
	NODE *current = head;

	while (current->next)
	{
		Reorder  = current->next;
	}

}

void main()
{
	NODE *head;
	NODE *temp;

	int key,  i;
	

	printf("enter id\n");
	scanf_s("%d", &key);
	

	head = makeNode(key);

	for (i = 0; i < 30; i++)
	{
		printf("enter id\n");
		scanf_s("%d", &key);


		temp = makeNode(key);

		addLast(head, temp);

	}



}