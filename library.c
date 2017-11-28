#include<stdio.h>
#include<stdlib.h>
#include "header.h"

link createnode(int data)
{
	link newnode = (link)malloc(sizeof(node));
	newnode->value = data;
	newnode->next = NULL;
	return newnode;
}

int calculatecount(link head)
{
	link curr = head->next;
	int count = 0;
	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return count;
}

void reverseprint(link head, int count)
{
	printf("�Էµ� �ڷḦ �������� ���: ");
	while (count != 0)
	{
		link pointer = head;
		for (int i = 0; i < count; i++)
		{
			pointer = pointer->next;
		}
		printf("%2d ", pointer->value);
		count -= 1;
	}
	printf("\n");
}

void printmiddle(link head, int count)
{
	link curr = head;
	double d = (double)count / 2;
	if (d != (int)d)
	{
		d = (double)d + (1 / 2);
		for (int i = 0; i < d; i++)
		{
			curr = curr->next;
		}
		printf("�Էµ� �ڷ��� ���� Ȧ���̹Ƿ� �߰����� %3d �Դϴ�.\n", curr->value);
	}
	else if (d == (int)d)
	{
		for (int i = 0; i < d; i++)
		{
			curr = curr->next;
		}
		printf("�Էµ� �ڷ��� ���� ¦���̹Ƿ� �߰����� %3d��", curr->value);
		curr = curr->next;
		printf("%3d �Դϴ�.\n", curr->value);
	}
}

void printlist(link head, int count)
{
	link curr = head;
	printf("�Էµ� �ڷḦ ������� ���: ");
	for (int i = 0; i < count; i++)
	{
		curr = curr->next;
		printf("%2d ", curr->value);
	}
	printf("\n");
}

void deleteodd(link head, int count)
{
	link curr = head;
	link removed;
	head->next = curr->next->next;
	curr = head->next;
	while (curr->next->next != NULL)
	{
		removed = curr->next;
		curr->next = removed->next;
		//free(remove);
		curr = curr->next;
	}
	curr->next = NULL;
}

void printeven(link head, int count)
{
	link curr = head->next;
	printf("���� �ڷḦ ������� ���: ");
	while (curr != NULL)
	{
		printf("%d ", curr->value);
		curr = curr->next;

	}
	printf("\n");
}