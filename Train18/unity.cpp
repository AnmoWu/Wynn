#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//#include<vector>
//#include<time.h>
#define LAST 3000
const double pi = 4.0 * atan(1.0);

//char buf[LAST];
int p[LAST] = { 1 };

//����5-2-2 �׳˵ľ�ȷֵ���ԸĶ���
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    for (i = 2; i <= n; i++)//iΪÿ�εĳɳ���
    {
        int c = 0;//cΪǰһλ�Ľ�λ��
        for (j = 0; j < LAST; j++)
        {
            int s = p[j] * i + c; 
            p[j] = s % 10;
            c = s / 10;
        }
    }
    for (j = LAST - 1; j >= 0; j--)//������λ��������˵����Ч���ֵ�λ������
        if (p[j])break;
    for (i = j; i >= 0; i--)
        printf("%d", p[i]);
    return 0;
}

