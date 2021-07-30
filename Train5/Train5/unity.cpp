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

bool isprime(int x);
int prime[100], count = 0;

int main()
{
    for (int i = 2; i <= 100; i++)
        if (isprime(i))prime[count++] = i;

    int n, p[100];
    while (scanf("%d", &n) == 1)
    {
        printf("%d!=", n);
        memset(p, 0, sizeof(p));
        int max = 0;
    }
    return 0;
}

bool isprime(int x)
{
    for (int i = 2; i < sqrt(x); i++)
        if (x % i == 0)return 0;
    return 1;
}