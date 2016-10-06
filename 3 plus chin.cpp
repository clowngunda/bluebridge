/*
竖式加法
题目大意
　　祥 瑞 生 辉
　　三 羊 献 瑞
−−−−−−−−
　三 羊 生 瑞 气
　
　
题目用了8个不同的汉字，表示0~9里八种不同的数字。组成两个数值相加，等于

第三个数值。

求三羊献瑞”对应到数字是多少？
*/
/*
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a, b, c, d, e, f, g;
    for(a = 1; a <= 9; a++)
    {
        for(b = 0; b <= 9; b++)
        {
            for(c = 0; c <= 9; c++)
            {
                for(d = 0; d <= 9; d++)
                {
                        for(e = 0; e <= 9; e++)
                        {
                            for(f = 0; f <= 9; f++)
                            {
                                for(g = 0; g <= 9; g++)
                                {
                                        if((a * 1000 + b * 100 + c * 10 + d) + (1000 + e * 100 + f * 10 + b) == (10000 + e * 1000 + c * 100 + b * 10 + g))
                                        {
                                            if(a != 1 && b != 1 && c != 1 && d != 1 && e != 1 && f != 1)
                                            {
                                                    if(a != b && a != c && a != d && a !=e && a != f && a != g && b != c && b != d && b != e && b != f && b != g && c != d && c != e && c != f && c != g && d != e && d != f && d != g && e != f && e != g && f != g)
                                                    {
                                                            cout<<1 * 1000 + e * 100 + f * 10 + b<<endl;
                                                    }

                                            }
                                        }

                                }
                            }
                        }

                }
            }
        }
    }
    return 0;

}
*/


#include "iostream"
#include "cstdio"
#include "algorithm"
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<=9;i++)
    {
        a[i]=i;
    }
    do
    {
     if(!a[2]||!a[6])
            continue;
     int x=a[2]*1000+a[3]*100+a[4]*10+a[5];
     int y=a[6]*1000+a[7]*100+a[8]*10+a[3];
     int z=a[6]*10000+a[7]*1000+a[4]*100+a[3]*10+a[9];
     if(x+y==z)
        cout<<y<<endl;

    }
    while(next_permutation(a,a+10));
    return 0;
}

