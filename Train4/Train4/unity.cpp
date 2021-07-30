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
//int p[LAST];


//5.4 Cantor数表 书版（改
int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int k = 1, s = 0;
        for (;;)
        {
            s += k;
            if (s >= n)
            {
                if (k % 2 == 1)
                    printf("%d/%d", s - n + 1, k - s + n);
                else
                    printf("%d/%d", k - s + n, s - n + 1);
                break;
            }
            k++;
        }
    }
    return 0;
}
