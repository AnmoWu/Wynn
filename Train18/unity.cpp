#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//#include<vector>
//#include<time.h>
#define LAST 3000
const double pi = 4.0 * atan(1.0);

//char buf[LAST];
int p[LAST] = { 1 };

//例题5-2-2 阶乘的精确值（略改动）
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    for (i = 2; i <= n; i++)//i为每次的成乘数
    {
        int c = 0;//c为前一位的进位数
        for (j = 0; j < LAST; j++)
        {
            int s = p[j] * i + c; 
            p[j] = s % 10;
            c = s / 10;
        }
    }
    for (j = LAST - 1; j >= 0; j--)//计算总位数（或者说是有效数字的位数？）
        if (p[j])break;
    for (i = j; i >= 0; i--)
        printf("%d", p[i]);
    return 0;
}

