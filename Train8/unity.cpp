#include<iostream>
#include<math.h>
#include<time.h>
#define last 1000000
int main()
{
	int x, n = 0, min = -last, max = last, s = 0;
	//只有定义了LOCAL，才编译两条重定向语句
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	while (scanf("%d", &x) == 1)
	{
		s += x;
		if (x < min) min = x;
		if (x > max) max = x;
		n++;
	}
	printf("%d %d %.3lf\n", min, max, (double)s / n);
	return 0;
}

