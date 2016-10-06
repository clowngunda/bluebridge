/*
振兴中华


    小明参加了学校的趣味运动会，其中的一个项目是：跳格子。


    地上画着一些格子，每个格子里写一个字，如下所示：


 从我做起振
 我做起振兴
 做起振兴中
 起振兴中华

    比赛时，先站在左上角的写着“从”字的格子里，可以横向或纵向跳到相邻的格子里，但不能跳到对角的格子或其它位置。一直要跳到“华”字结束。

    要求跳过的路线刚好构成“从我做起振兴中华”这句话。


    请你帮助小明算一算他一共有多少种可能的跳跃路线呢？


 答案是一个整数，请通过浏览器直接提交该数字。
 注意：不要提交解答过程，或其它辅助说明类的内容。

 题目类型：DFS
 题意：不解释了
题解：将这个格子初始化为一个二维数组即可，然后从开始搜索，一直搜索到最后一个点，看经历的步骤即可。
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
代码二：

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
