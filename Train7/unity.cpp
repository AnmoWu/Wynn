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

//例题4-4 解二元一次方程组
double x, y;
int solve(double a, double b, double c, double d, double e, double f);
int main()
{
    double a, b, c, d, e, f;
    scanf("%lf%lf%lf\n%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    int res = solve(a, b, c, d, e, f);
    if (res == 0)
        printf("无解\n");
    else if (res == LAST)
        printf("无穷多组解\n");
    else
        printf("%lf %lf\n", x, y);
    return 0;
}

int solve(double a, double b, double c, double d,double e,double f)
{
    if ((c - f * a / d) == 0)
        return LAST;
    else if ((b - e * a / d) == 0)
        return 0;
    else
    {
        y = (c - f * a / d) / (b - e * a / d);
        x = (c - b * y) / a;
    }
    return 1;
}