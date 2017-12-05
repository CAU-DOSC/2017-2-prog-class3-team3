#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int arr[], int i1, int i2, int bs)
{
	for (int i = 0; i < bs; i++)
	{
		int temp = arr[i1 + i];
		arr[i1 + i] = arr[i2 + i];
		arr[i2 + i] = temp;
	}
}

void block_swap(int arr[], int bs, int arrs)
{
	/*block�� ũ�Ⱑ 0�̰ų� �迭������ ���� ������� swap�� ����� ����*/
	if (bs == 0 || bs == arrs)
		return;

	/*block�� ũ�Ⱑ �迭������ ������ �����϶�*/
	if (arrs - bs == bs)
	{
		swap(arr, 0, arrs - bs, bs);
		return;
	}

	/*block�� ũ�Ⱑ �迭 ������ ����-blcok�� ũ�⺸�� ���� ��*/
	if (bs < arrs - bs)
	{
		swap(arr, 0, arrs - bs, bs);
		block_swap(arr, bs, arrs - bs);
	}

	/*block�� ũ�Ⱑ �迭 ������ ����-block�� ũ�⺸�� Ŭ ��*/
	if (bs > arr - bs)
	{
		swap(arr, 0, bs, arrs - bs);
		block_swap(arr + arrs - bs, (2 * bs) - arrs, bs);
	}
}
