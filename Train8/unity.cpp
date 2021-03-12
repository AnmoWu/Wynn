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

//例题5-1-1 还原错位输入
const char* s = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";//必须加const
int main()
{
    int i, c;
    while ((c = getchar()) != '\n')
        for (i = 1; s[i] && s[i] != c; i++)
        {
            if (s[i])putchar(s[i - 1]);
            else putchar(c);
        }
    return 0;
}

