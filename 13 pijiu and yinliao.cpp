/*ơ�ƺ����� ���ű�
Description
ơ��ÿ��2.3Ԫ������ÿ��1.9Ԫ��С����������ơ�ƺ����ϣ�һ������sԪ�� ���ǻ�֪�������ơ�Ʊ����ϵ������٣�������������˼���ơ�ơ�
Input
���������ж��飬ÿ��ռһ�У�����С������������Ǯ��s��
Output
ÿ��һ�����ݣ����С�����˶��ٹ�ơ�ơ�
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
            if(i * 2.3 + j * 1.9 >= s - 0.000001 && i * 2.3 + j * 1.9 <=  s + 0.000001)    //�����±� ������������ѽ
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



















