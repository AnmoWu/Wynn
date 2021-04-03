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
struct bign//结构体bign存储高精度非负整数
{
    int len, s[LAST];
    bign() //构造函数，进行自动初始化
    { 
        memset(s, 0, sizeof(s));//s数组存储每位上的具体数值
        len = 1;//len为总位数
    }
    bign operator=(const char* num)//成员函数 定义一种赋值运算
    {
        len = strlen(num);
        for (int i = 0; i < len; i++)
            s[i] = num[len - i - 1] - '0';
        return *this;
    }
    bign operator=(int num)//成员函数 同上
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

