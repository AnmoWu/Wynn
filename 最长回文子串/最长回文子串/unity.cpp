#include<iostream>
#include<math.h>
#include<ctype.h>
#define LAST 1000
//const double pi = 4.0 * atan(1.0);

char buf[LAST] = { "Confuciuss say:Madam,I'm Adam." };
char s[LAST];
int p[LAST];

//������Ӵ�
int main()
{
    int m = 0, max = 0;
    int n, i, j, x, y;

   //fgets(buf, sizeof(s), stdin);    //��ȡ����������ַ�����ĸ����
    n = strlen(buf);                  //����ĸ���ܳ���
    for (i = 0; i < n; i++)
        if (isalpha(buf[i]))          //�������б����źͿո�
        {
            p[m] = i;                 //�����ַ���Ӧ��λ����Ϣ
            s[m++] = toupper(buf[i]); //����ͳһ��д����ĸ��
        }
    for (i = 0; i < m; i++)
    {
        //ѭ��һ:�������Ӵ�
        for (j = 0; i - j >= 0 && i + j < m; j++)  
        {
            if (s[i - j] != s[i + j]) //��iΪ�е㣬jΪ�������˽��ж�Ӧƥ��
                break;
            if (j * 2 + 1 > max)      
            {
                max = j * 2 + 1;      //������Ӵ�����
                x = p[i - j];         //�����Ӵ���ʼλ��
                y = p[i + j];         //�����Ӵ�����λ��
            }
        }
        //ѭ������ż�����Ӵ�
        for (j = 0; i - j >= 0 && i - j + 1 < m; j++)
        {
            if (s[i - j] != s[i - j + 1]) //��iΪ���е㣬j-1Ϊ�������˽��ж�Ӧƥ��
                break;
            if (j * 2 + 2 > max)
            {
                max = j * 2 + 2;         //ͬ��
                x = p[i - j];
                y = p[i - j + 1];
            }
        }
    }

    for (i = x; i <= y; i++) //����ʼλ�����ĸ����Ӧλ�õ��Ӵ�
        printf("%c", buf[i]);
    return 0;
}

