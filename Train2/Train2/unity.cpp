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

//5.4 CantorÊý±í ³õ°æ
int cantor(int k);
int main()
{
    //printf("%d", cantor(5));
    int n;
    while (scanf("%d", &n) == 1)
    {
        int k = 2;
        if (n == 1)
            k = 1;
        for (; k < n; k++)
            if (cantor(k) >= n && cantor(k - 1) < n)
                break;
        int ov = cantor(k) - n + 1;
        int un = k - ov + 1;
        if (k % 2 != 1)
            printf("%d/%d", un, ov);
        else
            printf("%d/%d", ov, un); 
        //printf("%d", k);
    }
    return 0;
}

int cantor(int k)
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
        sum += i;
    return sum;
}