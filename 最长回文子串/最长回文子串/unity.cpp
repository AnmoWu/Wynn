#include<iostream>
#include<math.h>
#include<ctype.h>
#define LAST 1000
//const double pi = 4.0 * atan(1.0);

char buf[LAST] = { "Confuciuss say:Madam,I'm Adam." };
char s[LAST];
int p[LAST];

//最长回文子串
int main()
{
    int m = 0, max = 0;
    int n, i, j, x, y;

   //fgets(buf, sizeof(s), stdin);    //读取键盘输入的字符串（母串）
    n = strlen(buf);                  //存入母串总长度
    for (i = 0; i < n; i++)
        if (isalpha(buf[i]))          //忽略所有标点符号和空格
        {
            p[m] = i;                 //存入字符对应的位置信息
            s[m++] = toupper(buf[i]); //存入统一大写化的母串
        }
    for (i = 0; i < m; i++)
    {
        //循环一:奇数型子串
        for (j = 0; i - j >= 0 && i + j < m; j++)  
        {
            if (s[i - j] != s[i + j]) //以i为中点，j为翼长在两端进行对应匹配
                break;
            if (j * 2 + 1 > max)      
            {
                max = j * 2 + 1;      //更新最长子串长度
                x = p[i - j];         //更新子串起始位置
                y = p[i + j];         //更新子串结束位置
            }
        }
        //循环二：偶数型子串
        for (j = 0; i - j >= 0 && i - j + 1 < m; j++)
        {
            if (s[i - j] != s[i - j + 1]) //以i为左中点，j-1为翼长在两端进行对应匹配
                break;
            if (j * 2 + 2 > max)
            {
                max = j * 2 + 2;         //同上
                x = p[i - j];
                y = p[i - j + 1];
            }
        }
    }

    for (i = x; i <= y; i++) //按起始位置输出母串对应位置的子串
        printf("%c", buf[i]);
    return 0;
}

