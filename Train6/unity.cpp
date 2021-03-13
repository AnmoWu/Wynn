//最后取模
#include<iostream>
#include<time.h>
#define last 1000000
int main()
{
	unsigned int  i = 0, sum = 0, n;
	scanf("%d", &n);
	while (++i <= n)
	{
		int j = 0;
		int single = 1;
		while (++j <= i)
			single *= j;
		sum += single;
	}
	printf("%d\n", sum % last);
	printf("Time used = %.2lf\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}

