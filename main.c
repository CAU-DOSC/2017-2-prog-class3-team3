#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include"header.h"

int main(void)
{
	link head = malloc(sizeof(node));
	link curr;

	head->next = NULL;
	curr = head;

	printf("ctrl+z�� ���������� ������ �Է¹޽��ϴ�. \n");
	int data;
	int count = 0;
	while (!feof(stdin))
	{
		scanf("%d\n", &data);
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = createnode(data);
	}
	count = calculatecount(head);
	printf("�Էµ� �ڷ��� ����: %3d\n", count);
	reverseprint(head, count);
	printmiddle(head, count);
	printlist(head, count);
	deleteodd(head, count);
	printf("************************************************************\n");
	printf("***********�Է��ڷ��� Ȧ����° �ڷḦ �����մϴ�.***********\n");
	printf("************************************************************\n");
	printeven(head, count);
	return 0;
}