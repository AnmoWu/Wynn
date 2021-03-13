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
//int p[LAST];

//例题5-1-3 周期串教材版（啊啊啊我是废物
int main()
{
    scanf("%s", &buf);
    int len = strlen(buf);//将字符串总长度存入len
    for(int i=1;i<=len;i++)//寻找周期长度i
        if (len % i == 0)
        {
            int ok = 1;
            for(int j=1;j<len;j++)
                if (buf[j] != buf[j % i])//判断当前周期长度是否合法
                {
                    ok = 0;
                    break;
                }
            if (ok)
            {
                printf("%d\n", i);//输出最短的合法周期
                break;
            }
        }
    return 0;
}

