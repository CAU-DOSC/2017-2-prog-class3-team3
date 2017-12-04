#include"juggling.h"
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
	char * arr;
	int n, d;

	// Input
	printf("Input N : ");
	scanf("%d", &n);

	arr = (char*)malloc(sizeof(char)*n);
	
	printf("Input string : ");
	scanf("%s", arr);
	
	if (strlen(arr) != n) {
		printf("Please Input again : ");
		scanf("%s", arr);
	}

	printf("Input d to shift: ");
	scanf("%d", &d);

	// Juggling Rotation
	clock_t begin = clock();
	juggling(arr, n, d);
	clock_t end = clock();
	printf("Time spent for jugggling : %fs", (double)(end - begin) / CLOCKS_PER_SEC);



}