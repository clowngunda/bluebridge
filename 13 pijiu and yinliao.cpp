/*啤酒和饮料 蓝桥杯
Description
啤酒每罐2.3元，饮料每罐1.9元。小明买了若干啤酒和饮料，一共花了s元。 我们还知道他买的啤酒比饮料的数量少，请你计算他买了几罐啤酒。
Input
输入数据有多组，每组占一行，包含小明买东西花的总钱数s。
Output
每行一组数据，输出小明买了多少罐啤酒。
Sample Input
 82.3
Sample Output

*/
/*
#include<iostream>
using namespace std;
int main()
{
    double s;
    while(cin>>s)
    {
    for(int i = 1; i * 2.3 <= s; i++)
        for(int j = i + 1; i * 2.3 + j * 1.9 <= s; j++)
        {
            if(i * 2.3 + j * 1.9 >= s - 0.000001 && i * 2.3 + j * 1.9 <=  s + 0.000001)    //黑人懵逼 这样会怎样好呀
                cout<<i<<endl;
} }
        return 0;
}
*/




#include<iostream>
using namespace std;

int main()
{
    int i,j;
    double s=0;
    int m;
    cin>>s;

    m=s/2.3+1;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(2.3*j+1.9*i==s)
              {
                  cout<<j<<endl;
                  break;
              }
        }
    }
    return 0;

}



















