/*
ʮ������ת�˽���
��������
��������n��ʮ��������������������Ƕ�Ӧ�İ˽�������
�����ʽ
��������ĵ�һ��Ϊһ��������n ��1<=n<=10����
����������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��
�����ʽ
�������n�У�ÿ��Ϊ�����Ӧ�İ˽�����������
ע��
���������ʮ��������������ǰ��0������012A��
��������İ˽�����Ҳ������ǰ��0��
��������
2
39
123ABC
�������
71
4435274
��ʾ
�����Ƚ�ʮ��������ת����ĳ������������ĳ������ת���ɰ˽��ơ�

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



