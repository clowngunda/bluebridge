/*
���ҵ�����
���ҵ�����
ʱ�����ƣ�1.0s   �ڴ����ƣ�256.0MB

��������
С���������Ŀ����������3�������顣���ڽ������춼�ڼӰ��ء�Ϊ����ʿ����С�Ŵ����ÿ���鷢һ�����ң��ݴ����ܲ��ԣ�������Ҫ���ǣ�
1. ����ĺ�������������ͬ
2. �����ڱ�����ƽ�ֺ��ң���Ȼ�ǲ��ܴ���ģ�
3. �����ṩ����1,2��������С��������Լ�ָ����
�����ʽ
�����������������a, b, c����ʾÿ�������ڼӰ���������ÿո�ֿ���a,b,c<30��
�����ʽ
���һ������������ʾÿ�����ҵ�������
��������1
2 4 5
�������1
20
��������2
3 1 1
�������2
3
*/

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <queue>
#define LL long long
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}

int main()
{
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c)!=EOF)
	{
		a = a*b/gcd(a,b); a = a*c/gcd(a,c);
		printf("%d", a);
	}
	return 0;
}













#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

}
