
#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
    for(int i=1;i<=48;i++)
    {
        for(int j=i+2;j<=48;j++)
        {
            if(1225-i-(i+1)-j-(j+1)==2015-i*(i+1)-j*(j+1))
            cout<<i<<endl;
        }
    }
    return 0;
}


/*
把1+2+3+…+48+49中的两个加号改成乘号（修改位置不能相邻），使得式
子的结果由1225变为2015。
用双循环暴力两个乘号的位置，计算在数字i、j后的加号改为乘号，
式子数值的变化即可，注意j的起始位置为i+2。
*/





/*


#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
    for(int i=1;i<48;i++)
    {
        for(int j=i+2;j<=48;j++)
        {
            if(1225-(i+i+1+j+j+1)==2015-i*(i+1)-j*(j+1))
                cout<<i<<j<<endl;  //这里couti就行！！
        }
    }
}



*/






