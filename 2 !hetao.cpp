/*
核桃的数量
核桃的数量
时间限制：1.0s   内存限制：256.0MB

问题描述
小张是软件项目经理，他带领3个开发组。工期紧，今天都在加班呢。为鼓舞士气，小张打算给每个组发一袋核桃（据传言能补脑）。他的要求是：
1. 各组的核桃数量必须相同
2. 各组内必须能平分核桃（当然是不能打碎的）
3. 尽量提供满足1,2条件的最小数量（节约闹革命嘛）
输入格式
输入包含三个正整数a, b, c，表示每个组正在加班的人数，用空格分开（a,b,c<30）
输出格式
输出一个正整数，表示每袋核桃的数量。
样例输入1
2 4 5
样例输出1
20
样例输入2
3 1 1
样例输出2
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
