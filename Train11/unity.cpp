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

//����5-1-3 ���ڴ��̲İ棨���������Ƿ���
int main()
{
    scanf("%s", &buf);
    int len = strlen(buf);//���ַ����ܳ��ȴ���len
    for(int i=1;i<=len;i++)//Ѱ�����ڳ���i
        if (len % i == 0)
        {
            int ok = 1;
            for(int j=1;j<len;j++)
                if (buf[j] != buf[j % i])//�жϵ�ǰ���ڳ����Ƿ�Ϸ�
                {
                    ok = 0;
                    break;
                }
            if (ok)
            {
                printf("%d\n", i);//�����̵ĺϷ�����
                break;
            }
        }
    return 0;
}

