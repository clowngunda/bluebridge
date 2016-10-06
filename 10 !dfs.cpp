/*剪格子 - 蓝桥杯
引言
这是2013年第四届蓝桥杯全国软件大赛预赛A组（C/C++组）第9题，为编程题，方法是深度优先搜索（DFS）。
题目描述
标题：剪格子

    如图p1.jpg所示，3 x 3 的格子中填写了一些整数。
    我们沿着图中的红色线剪开，得到两个部分，每个部分的数字和都是60。



    本题的要求就是请你编程判定：对给定的m x n 的格子中的整数，是否可以分割为两个部分，使得这两个区域的数字和相等。
    如果存在多种解答，请输出包含左上角格子的那个区域包含的格子的最小数目。
    如果无法分割，则输出 0

程序输入输出格式要求：
程序先读入两个整数 m n 用空格分割 (m,n<10)
表示表格的宽度和高度
接下来是n行，每行m个正整数，用空格分开。每个整数不大于10000
程序输出：在所有解中，包含左上角的分割区可能包含的最小的格子数目。

例如：
用户输入：
3 3
10 1 52
20 30 1
1 2 3
则程序输出：
3
再例如：
用户输入：
4 3
1 1 1 1
1 30 80 2
1 1 1 100
则程序输出：
10
(参见p2.jpg)


资源约定：
峰值内存消耗 < 64M
CPU消耗  < 5000ms
请严格按要求输出，不要画蛇添足地打印类似：“请您输入...” 的多余内容。
所有代码放在同一个源文件中，调试通过后，拷贝提交该源码。
注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标准，不要调用依赖于编译环境或操作系统的特殊函数。
注意: 所有依赖的函数必须明确地在源文件中 #include <xxx>， 不能通过工程设置而省略常用头文件。
提交时，注意选择所期望的编译器类型。
分析
本题的主要思路是深度优先搜索，但要注意一次深度优先搜索结束后的状态恢复。
题目给出的“挖洞剪法也可”，更加肯定了DFS的正确性。
虽然是倒数第二题，难度并没那么大。
代码实现
*/
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#define MAXMN 20
using namespace std;
int m, n;
int sum;
int map[MAXMN][MAXMN];
int vis[MAXMN][MAXMN];
vector<int> v;
int cnt = 0;
int sumd = 0;
void print(int x) {
	cout << x << " ";
}
void dfs(int x, int y) {
	if(vis[x][y]) {
		return;
	}
	vis[x][y] = 1;
	cnt++;
	sumd += map[x][y];
	if(sumd * 2 == sum) {
		v.push_back(cnt);
		return;
	}
	for(int i = -1; i <= 1; i++) {
		for(int j = -1; j <= 1; j++) {
			if(i == j) {
				continue;
			}
			int newx = x + i;
			int newy = y + j;
			if(newx >= 0 && newx < n && newy >= 0 && newy < m) {
				dfs(newx, newy);
			}
		}
	}
	sumd -= map[x][y];
	cnt--;
	vis[x][y] = 0;
}
int main(void) {
	cin >> m >> n;
	sum = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> map[i][j];
			sum += map[i][j];
		}
	}
	if(sum % 2 == 1) {
		cout << "0" << endl;
		return 0;
	}
	memset(vis, 0, sizeof(vis));
	dfs(0, 0);
	//for_each(v.begin(), v.end(), print);
	cout << *min_element(v.begin(), v.end()) << endl;
	return 0;
}
