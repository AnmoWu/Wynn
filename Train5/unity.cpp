//#define LOCAL
#include<iostream>
#include<math.h>
#include<string.h>
//#include<ctype.h>
//#include<vector>
//#include<time.h>
#define LAST 1000
const double pi = 4.0 * atan(1.0);
int main()
{
	/*FILE* fin, * fout;
	fin = fopen("data.in", "rb");
	fout = fopen("data.out","wb");*/

	int c, max, len, h, k;
	int i = 0, j = 0;
	char  t[LAST], r[LAST];

	//getchar() == fgetc(stdin)
	while (c = (fgetc(stdin)) != '\n')
	{
		r[j++] = c;
		if (c >= 'A' && c <= 'Z')
			t[i++] = tolower(c);
		else if (c >= 'a' && c <= 'z')
			t[i++] = c;
	}
	for (k = 0; k <= i / 2; k++)
	{
		len = 0;
		for (int n = k; n <= (i - k) / 2; n++)
		{
			if (t[n] == t[i - n])
				len += 1;
			else
				break;
		}
		if (len > 1 && max < len)
			max = len;
	}
	h = k;
	while (h <= max)
		printf("%c", r[h]);
	return 0;
}
