/*
十六进制转八进制
问题描述
　　给定n个十六进制正整数，输出它们对应的八进制数。
输入格式
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。
输出格式
　　输出n行，每行为输入对应的八进制正整数。
注意
　　输入的十六进制数不会有前导0，比如012A。
　　输出的八进制数也不能有前导0。
样例输入
2
39
123ABC
样例输出
71
4435274
提示
　　先将十六进制数转换成某进制数，再由某进制数转换成八进制。

*/

#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include<algorithm>


using namespace std;

int b[100005],tf;
int c[100005],tf1;

void toE(int n)
{
    int i=4;
    while(n)
    {
        i--;
        b[tf++]=n%2;
        n/=2;
    }
    while(i--)
        b[tf++]=0;
}

int main()
{
    int t;
    while(t--)
    {
        tf1=tf=0;
        char a[100005];
        scanf("%s",a);
        int t=strlen(a);
        for(int i=0;i<t;i++)
        {
            a[i]=a[i]>='A'?a[i]-'A'+10:a[i]-'0';
        }
        for(int i=t-1;i>=0;i--)
        {
            toE(a[i]);
        }
        for(int i=0;i<tf;i+=3)
        {
            int tem=0,s=1;
            for(int k=0;k<3&&i+k<tf;k++)
            {
                tem+=b[i+k]*s;
                s*=2;
            }
            c[tf1++]=tem;
        }
        if(c[tf1-1]!=0)
            printf("%d",c[tf1-1]);
        for(int i=tf1-2;i>=0;i--)
            printf("%d",c[i]);
        printf("\n");
    }
    return 0;
}



