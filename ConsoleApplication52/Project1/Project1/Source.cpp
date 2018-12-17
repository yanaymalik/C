#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
	int num;
	struct Node *naxt1;
	struct Node *naxt2;
};
//void func(Node *head)
//{
//	while ()
//	{
//
//	}
//}
Node * newNode(int key)
{
	Node *temp = (Node *)malloc(sizeof(Node));
	if (!temp)
		return NULL;
	temp-> num = key;
	temp->naxt1 = NULL;
	temp->naxt2 = NULL;
	return temp;
}
void addLast(Node *head, Node *temp)
{
	Node *current = head;
	while (current ->naxt1)
	{
		current = current->naxt1;
	}
	current->naxt1 = temp;
	temp->naxt2 = current;
}
void main()
{
	Node *head;
	Node *temp;
	head = newNode(1000);
	for(int i = 2;  i< 20; i+=2)
	{
		temp = newNode(i);
		addLast(head, temp);
	}
}