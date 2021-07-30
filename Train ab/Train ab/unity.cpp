#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
#define LAST 1000
const double pi = 4.0 * atan(1.0);

//char buf[LAST];
//int p[LAST];

int solve(float a, float b, float c, float d, float e, float f);

//二元一次方程组
int main()
{
    float a, b, c;
    float d, e, f;
    scanf("%f %f %f", &a, &b, &c);
    scanf("\n%f %f %f", &d, &e, &f);
    int s = solve(a, b, c, d, e, f);
   
    return 0;
}

int solve(float a, float b, float c, float d, float e, float f)
{
    double temp = d * c - a * f;
    if (temp == 0)
    {
        printf("无穷解");
        return 0;
    }  
    double y = temp / (d * b - a * e);
    double x1 = (c - b * y) / a;
    double x2 = (f - e * y) / d;
    //assert(x1 == x2);
    if (x1 == x2)
    {
        printf("唯一解");
        printf("%lf %lf", x1, y);
        return 1;
    }
     printf("无解");
     return 2;
}

