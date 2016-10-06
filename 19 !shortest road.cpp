/*
最短路 （SPFA）
问题描述
给定一个n个顶点，m条边的有向图（其中某些边权可能为负，但保证没有负环）。请你计算从1号点到其他点的最短路（顶点从1到n编号）。
输入格式
第一行两个整数n, m。
接下来的m行，每行有三个整数u, v, l，表示u到v有一条长度为l的边。
输出格式
共n-1行，第i行表示1号点到i+1号点的最短路。
样例输入
3 3
1 2 -1
2 3 -1
3 1 2
样例输出
-1
-2
数据规模与约定
对于10%的数据，n = 2，m = 2。
对于30%的数据，n <= 5，m <= 10。
对于100%的数据，1 <= n <= 20000，1 <= m <= 200000，-10000 <= l <= 10000，保证从任意顶点都能到达其他所有顶点。
*/


#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
#define inf 99999999
typedef struct dd
{
    int a,d;
}node;
int dis[20005],n;
vector<node>map[20005];
void set()
{
    for(int i=1;i<=n;i++)
    {
        dis[i]=inf;
    }
}
void spfa()
{
    queue<int>q;
    int b[20005]={0},t;
    q.push(1); b[1]=1; dis[1]=0;
    while(!q.empty())
    {
        t=q.front(); q.pop();
        b[t]=0;
        int len=map[t].size(),a;
        for(int i=0;i<len;i++)
        {
            a=map[t][i].a;
            if(dis[a]>map[t][i].d+dis[t])
            {
                dis[a]=map[t][i].d+dis[t];
                if(!b[a])
                b[a]=1,q.push(a);
            }
        }

    }
}
int main()
{
    int m,a,b,l;
    node NOW;
    while(scanf("%d%d",&n,&m)==2)
    {
        set();
        while(m--)
        {
            scanf("%d%d%d",&a,&b,&l);
            NOW.a=b; NOW.d=l;
            map[a].push_back(NOW);
        }
        spfa();
        for(int i=2;i<=n;i++)
        printf("%d\n",dis[i]);
    }
    return 0;
}
