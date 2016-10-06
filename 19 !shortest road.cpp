/*
���· ��SPFA��
��������
����һ��n�����㣬m���ߵ�����ͼ������ĳЩ��Ȩ����Ϊ��������֤û�и���������������1�ŵ㵽����������·�������1��n��ţ���
�����ʽ
��һ����������n, m��
��������m�У�ÿ������������u, v, l����ʾu��v��һ������Ϊl�ıߡ�
�����ʽ
��n-1�У���i�б�ʾ1�ŵ㵽i+1�ŵ�����·��
��������
3 3
1 2 -1
2 3 -1
3 1 2
�������
-1
-2
���ݹ�ģ��Լ��
����10%�����ݣ�n = 2��m = 2��
����30%�����ݣ�n <= 5��m <= 10��
����100%�����ݣ�1 <= n <= 20000��1 <= m <= 200000��-10000 <= l <= 10000����֤�����ⶥ�㶼�ܵ����������ж��㡣
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
