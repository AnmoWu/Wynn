#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//#include<vector>
//#include<time.h>
#define LAST 1000
const double pi = 4.0 * atan(1.0);

char buf[LAST];
int p[LAST];


int main()
{
    
    /*FILE* fin;
    fin = fopen("read.in", "rb");*/
    
    int i = -1;
    char a;
    while (scanf("%c", &a) == 1)
    {
        if (isalpha(a))
            buf[i++] = a;
        else if (isblank(a))
            buf[i++] = '0';
        else
            break;
    }

    
    //printf()
    return 0;
}

