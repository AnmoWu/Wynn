#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//#include<vector>
//#include<time.h>
#define LAST 2000
const double pi = 4.0 * atan(1.0);

//char buf[LAST];
int p[LAST];
int get_next(int x);

//ÀýÌâ5-3-1 Ã°ÅÝÅÅÐò£¨6174 ÎÊÌâ£©
int main()
{
    int count = 1;
    scanf("%d", &p[0]);
    printf("%d", p[0]);
    for (;;count++)
    {
        p[count] = get_next(p[count - 1]);
        printf(" -> %d", p[count]);
        int found = 0;
        for(int i=0;i<count;i++)
            if (p[i] == p[count])
            {
                found = 1;
                break;
            }
        if (found)break;
    }
    printf("\n");
    return 0;
}

int get_next(int x)
{
    int a, b, n;
    char s[10];
    sprintf(s, "%d", x);
    n = strlen(s);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if (s[i] > s[j])
            {
                char t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
    sscanf(s, "%d", &b);
    for (int i = 0; i < n / 2; i++)
    {
        char t = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = t;
    }
    sscanf(s, "%d", &a);
    return a - b;
}
