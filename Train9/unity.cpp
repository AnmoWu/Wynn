
//2 - 1
//#define LOCAL
#include<iostream>
#include<math.h>
/*#include<time.h>
#define last 1000000*/
int main()
{
	int con = 0, n;
	scanf("%d", &n);
	while (n >= 1)
	{
		n /= 10;
		con++;
	}
	printf("%d", con);
	return 0;
}

