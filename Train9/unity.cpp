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

//������Ӵ�
int main()
{
    /*FILE* fin, * fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out","wb");*/

    int n, i, j, x, y;
    int m = 0, max = 0;
    fgets(buf, sizeof(s), stdin);//����Ļ������ַ�������buf����
    n = strlen(buf);//��buf����ĳ��ȴ���n

    for (i = 0; i < n; i++)
        if (isalpha(buf[i]))//�ж��ַ��Ƿ�Ϊ��ĸ
        {
            p[m] = i;//��buf��������ĸ�Ķ�Ӧ�±����p����
            s[m++] = toupper(buf[i]);//���ַ����е�Сд��ĸת���ɴ�д�ַ�������s����
        }
    /*for (j = 0; j <= m; j++)
        printf("%d %c\n", p[j], s[j]);*/

    for (i = 0; i < m; i++)//Ѱ��������Ӵ�������λ��i
    {
        //�����������ַ���������Ӵ�
        for (j = 0; i >= j && i + j < m; j++)//Ѱ��������Ӵ�����j����
        {
            if (s[i - j] != s[i + j])break;
            if (max < j * 2 + 1)
            {
                max = j * 2 + 1;//����Ŀǰ��Ļ����Ӵ��ĳ���max
                x = p[i - j];//��¼buf�����л����Ӵ��Ŀ�ʼλ��x
                y = p[i + j];//��¼buf�����л����Ӵ��Ľ���λ��y
            }
        }
        //����ż�����ַ���������Ӵ�
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
    if (x == y)//�����Ӵ��ĳ���С�ڵ���1��Ĭ�ϲ�����
        printf("Don't exsist.");
    else
    {
        for (i = x; i <= y; i++)//���buf�����е�������Ӵ�
            printf("%c", buf[i]);
    }
    return 0;
}

