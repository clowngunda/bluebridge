/*
��������

����n�������ҳ���n���������ֵ����Сֵ���͡�
�����ʽ
��һ��Ϊ����n����ʾ���ĸ�����
�ڶ�����n������Ϊ������n������ÿ�����ľ���ֵ��С��10000��
�����ʽ
������У�ÿ��һ����������һ�б�ʾ��Щ���е����ֵ���ڶ��б�ʾ��Щ���е���Сֵ�������б�ʾ��Щ���ĺ͡�
��������
5
1 3 -2 4 5
�������
5
-2
3
*/


#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int a[10005];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];

        }
        sort(a,a+n);
        cout<<a[n-1]<<endl<<a[0]<<endl<<sum<<endl;
    }
    return 0;
}
