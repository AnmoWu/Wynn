#define LOCAL
#include<iostream>
#include<math.h>
#include<time.h>
#define last 1000000
int main()
{
	FILE* fin, * fout;
	//ת���ɱ�׼I/Oֻ�轫fin��ֵΪstdin,��fout��ֵΪstout,��Ҫ����fopen��fclose.
	fin = fopen("data.in", "rb");
	fout = fopen("data.out", "wb");
	int x, n = 0, min = last, max = -last, s = 0;
	while (fscanf(fin, "%d", &x) == 1);
	{
		s += x;
		if (x < min)min = x;
		if (x > max)max = x;
		n++;
	}
	fprintf(fout, "%d %d %.3lf\n", min, max, (double)s / n);
	fclose(fin);
	fclose(fout);
	return 0;
}
