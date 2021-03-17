#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//#include<vector>
//#include<time.h>
#define LAST 1000
const double pi = 4.0 * atan(1.0);

//char buf[LAST];
int p[LAST];

//例题5-2-1 进位次数统计
int ca(int a, int b);
int main()
{
    int a, b;
    int i = 0, j = 0;
    while (scanf("%d%d", &a, &b) == 2)
    {
        if (!a && !b)break;
        p[i++] = ca(a, b);
    }
    while (j < i)
        printf("%d\n", p[j++]);
    return 0;
}

int w[9], s[9];
int ca(int a, int b)
{
    for (int i = 0; a>0&&b>0; i++)
    {
        w[i] = a % 10;
        s[i] = b % 10;
        a /= 10;
        b /= 10;
    }
    int cnt = 0;   
    for (int j = 0; j < 9; j++)
    {
        int t = 0;
        if (w[j] + s[j] + t >= 10)t = (w[j] + s[j] + t) / 10;
        //printf("%d %d#%d ", t, w[j], s[j]);
        cnt += t;
    }
    return cnt;
}

