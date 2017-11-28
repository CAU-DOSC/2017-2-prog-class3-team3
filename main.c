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

	printf("ctrl+z를 누를때까지 정수를 입력받습니다. \n");
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
	printf("입력된 자료의 개수: %3d\n", count);
	reverseprint(head, count);
	printmiddle(head, count);
	printlist(head, count);
	deleteodd(head, count);
	printf("************************************************************\n");
	printf("***********입력자료의 홀수번째 자료를 삭제합니다.***********\n");
	printf("************************************************************\n");
	printeven(head, count);
	return 0;
}