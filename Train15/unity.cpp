//#define LOCAL
#include<iostream>
#include<math.h>
/*#include<time.h>
#define last 1000000*/
bool judge(int a, int b, int c);
int main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (judge(a, b, c) == 0)
		printf("No answer");
	return 0;
}
bool judge(int a, int b, int c)
{
	double m = 9.0;
	bool flag = 0;
	while (++m <= 100)
	{
		if (floor((m - a) / 3) == (m - a) / 3 && floor((m - b) / 5) == (m - b) / 5 && floor((m - c) / 7) == (m - c) / 7)
		{
			flag = 1;
			printf("%.0lf", m);
			break;
		}
	}
	return flag;
}
