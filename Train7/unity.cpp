//�ֲ�ȡģ
#include<iostream>
#include<time.h>
#define last 1000000
int main()
{
	int sum = 0, n, j;
	scanf("%d", &n);
	//while (++i <n)
	for (int i = 1; i <= n; i++)
	{
		int single = 1;
		for (j = 1; j <= i; j++)
			single = (single * j) % last;
		sum = (sum + single) % last;
	}
	printf("%d\n", sum);
	printf("Time used = %.2lf\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}

