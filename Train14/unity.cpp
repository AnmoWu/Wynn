//#define LOCAL
#include<iostream>
#include<math.h>
/*#include<time.h>
#define last 1000000*/
int main()
{
	int j, k, n;
	scanf("%d", &n);
	int i = 1, m = n;
	while (i++ <= n)
	{
		for (j = 0; j < i - 2; j++)
			printf(" ");
		for (k = 2 * m - 1; k >= 1; k--)
			printf("#");
		printf("\n");
		m--;
	}
	return 0;
}
