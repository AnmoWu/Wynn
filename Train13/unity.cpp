//#define LOCAL
#include<iostream>
#include<math.h>
/*#include<time.h>
#define last 1000000*/
int main()
{
	int n, a, b, c;
	for (n = 100; n <= 999; n++)
	{
		a = n / 100;
		b = (n % 100) / 10;
		c = n % 10;
		//printf("%d %d %d\n", a, b, c);
		if (n == pow(a, 3) + pow(b, 3) + pow(c, 3))
			printf("%d\n", n);
	}
	return 0;
}

