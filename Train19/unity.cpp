#include<iostream>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//#include<string>
//#include<vector>
//#include<time.h>
#define LAST 1000
const double pi = 4.0 * atan(1.0);

//char buf[LAST];
//int p[LAST];
struct bign//�ṹ��bign�洢�߾��ȷǸ�����
{
    int len, s[LAST];
    bign() //���캯���������Զ���ʼ��
    { 
        memset(s, 0, sizeof(s));//s����洢ÿλ�ϵľ�����ֵ
        len = 1;//lenΪ��λ��
    }
    bign operator=(const char* num)//��Ա���� ����һ�ָ�ֵ����
    {
        len = strlen(num);
        for (int i = 0; i < len; i++)
            s[i] = num[len - i - 1] - '0';
        return *this;
    }
    bign operator=(int num)//��Ա���� ͬ��
    {
        char s[LAST];
        sprintf(s, "%d", num);
        *this = s;
        return *this;
    }
    bign(int num)
    {
        *this = num;
    }
    bign(const char* num)
    {
        *this = num;
    }
    string str() const
    {
        string res = "";
        for (int i = 0; i < len; i++)
            res = (char)(s[i] + '0') + res;
        if (res == "")res = "0";
        return res;
    }
    
};

istream& operator>>(istream& in, bign& x)
{
    string s;
    in >> s;
    x = s.c_str();
    return in;
}

ostream& operator<<(ostream& out, const bign& x)
{
    out << x.str();
    return out;
}


int main()
{
    
    return 0;
}

