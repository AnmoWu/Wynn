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

//����5-2-1 ��λͳ�ƽ̲İ�
//����д�������������������
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) == 2)
    {
        if (!a && !!b)break;
        int c = 0, ans = 0;
        for (int i = 9; i >= 0; i--)
        {
            c = (a % 10 + b % 10 + c) > 9 ? 1 : 0;
            ans += c;
            a /= 10;
            b /= 10;
        }
        printf("%d\n", ans);
    }
    return 0;
}

