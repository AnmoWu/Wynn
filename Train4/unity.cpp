//aabb形式的完全平方数
#include<iostream>
#include<math.h>
int main()
{
	for (int i = 1; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			int n;
			n = i * 1000 + i * 100 + j * 10 + j;//n=i*1100+j*11
			if (sqrt(n) == floor(sqrt(n)))
				printf("%d\n", n);
		}
	return 0;
}

