/*
�����л�


    С���μ���ѧУ��Ȥζ�˶��ᣬ���е�һ����Ŀ�ǣ������ӡ�


    ���ϻ���һЩ���ӣ�ÿ��������дһ���֣�������ʾ��


 ����������
 ����������
 ����������
 �������л�

    ����ʱ����վ�����Ͻǵ�д�š��ӡ��ֵĸ�������Ժ���������������ڵĸ���������������Խǵĸ��ӻ�����λ�á�һֱҪ�����������ֽ�����

    Ҫ��������·�߸պù��ɡ��������������л�����仰��


    �������С����һ����һ���ж����ֿ��ܵ���Ծ·���أ�


 ����һ����������ͨ�������ֱ���ύ�����֡�
 ע�⣺��Ҫ�ύ�����̣�����������˵��������ݡ�

 ��Ŀ���ͣ�DFS
 ���⣺��������
��⣺��������ӳ�ʼ��Ϊһ����ά���鼴�ɣ�Ȼ��ӿ�ʼ������һֱ���������һ���㣬�������Ĳ��輴�ɡ�
*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int f[4][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8}};
int visit[4][5]={0};
int cnt=0;
void dfs(int row,int col)
{
	if(row==3&&col==4)
	{
		cnt++;
		return ;
	}
	if(row>=0&&row<4)
	{
		int x=row+1;
		visit[x][col]=1;
		dfs(x,col);
		visit[row][col]=0;
	}
	if(col>=0&&col<4)
	{
		int y=col+1;
		visit[row][y]=1;
		dfs(row,y);
		visit[row][col]=0;
	}

}
int main()
{
	memset(visit,0,sizeof(visit));
	dfs(0,0);
	printf("%d\n",cnt);
	return 0;
}

/*
�������

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int f[4][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{4,5,6,7,8}};
int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int visit[4][5]={0};
int cnt=0;
void dfs(int row,int col)
{
	int i;
	if(row==3&&col==4)
	{
		cnt++;
		return ;
	}
	for(i=0;i<4;i++)
	{
		int x=row+d[i][0];
		int y=col+d[i][1];
		if((x>=0&&x<4)&&(y>=0&&y<5)&&!visit[x][y]&&f[x][y]==f[row][col]+1)
		{
			visit[row][col]=1;
			dfs(x,y);
			visit[row][col]=0;
		}
	}

}
int main()
{
	memset(visit,0,sizeof(visit));
	dfs(0,0);
	printf("%d\n",cnt);
	return 0;
}

*/
