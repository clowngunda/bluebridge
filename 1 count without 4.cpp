//第1题：统计不含4的数字
//题目大意
//　　统计10000至99999中，不包含4的数值个数。

#include "iostream"

using namespace std;
int main()
{
    int a,b,c,d,e;
    int count=0;
    for(a=1;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
        for(c=0;c<=9;c++)
        {
            for(d=0;d<=9;d++)
            {
                for(e=0;e<=9;e++)
                {
                    if(a!=4&&b!=4&&c!=4&&d!=4&&e!=4)
                    {
                        count++;
                    }
                }
            }
        }

        }
    }
    cout<<count<<endl;
    return 0;
}









/*

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    int count=0;
    int s=0;
    for(a=1;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for(c=0;c<=9;c++)
            {
                for(d=0;d<=9;d++)
                {
                    for(e=0;e<=9;e++)
                    {
                        s=10000*a+1000*b+100*c+10*d+e;
                        if(a!=4&&b!=4&&c!=4&&d!=4&&e!=4)
                        count++;
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}
*/
