#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//#include<vector>
//#include<time.h>
#define LAST 1000
const double pi = 4.0 * atan(1.0);

char buf[LAST], s[LAST];
int p[LAST];

//最长回文子串
int main()
{
    /*FILE* fin, * fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out","wb");*/

    int n, i, j, x, y;
    int m = 0, max = 0;
    fgets(buf, sizeof(s), stdin);//将屏幕输入的字符串存入buf数组
    n = strlen(buf);//将buf数组的长度存入n

    for (i = 0; i < n; i++)
        if (isalpha(buf[i]))//判断字符是否为字母
        {
            p[m] = i;//将buf数组中字母的对应下标存入p数组
            s[m++] = toupper(buf[i]);//将字符串中的小写字母转换成大写字符并存入s数组
        }
    /*for (j = 0; j <= m; j++)
        printf("%d %c\n", p[j], s[j]);*/

    for (i = 0; i < m; i++)//寻找最长回文子串的中心位置i
    {
        //适用奇数个字符的最长回文子串
        for (j = 0; i >= j && i + j < m; j++)//寻找最长回文子串的翼长j（？
        {
            if (s[i - j] != s[i + j])break;
            if (max < j * 2 + 1)
            {
                max = j * 2 + 1;//更新目前最长的回文子串的长度max
                x = p[i - j];//记录buf数组中回文子串的开始位置x
                y = p[i + j];//记录buf数组中回文子串的结束位置y
            }
        }
        //适用偶数个字符的最长回文子串
        for (j = 0; i >= j && i - j + 1 < m; j++)
        {
            if (s[i - j] != s[i + j + 1])break;
            if (max < j * 2 + 2)
            {
                max = j * 2 + 2;
                x = p[i - j];
                y = p[i + j + 1];
            }
        }
    }
    if (x == y)//回文子串的长度小于等于1，默认不存在
        printf("Don't exsist.");
    else
    {
        for (i = x; i <= y; i++)//输出buf数组中的最长回文子串
            printf("%c", buf[i]);
    }
    return 0;
}

