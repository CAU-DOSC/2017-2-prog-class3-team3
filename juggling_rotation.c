#include<stdio.h>

	int gcd(int a, int b)
		{
			int c;
			while (a != 0) {
				c = a;
				a = b%a;
				b = c;
			}
			return b;
		}


	int main()
	{
		char arr[] = { "abcdefghijk" };
		int d = 3;
		int n = strlen(arr);
		char temp;
		int i, j, k;
		for (int i = 0; i < gcd(n, d); i++) {
			temp = arr[i];
			j = i;
			while (1) {
				k = d + j;
				if (k >= n)
					k -= n;
				if (k == i)
					break;
				arr[j] = arr[k];
				j = k;
			}
			arr[j] = temp;
		}
		printf("%s", arr);
	}