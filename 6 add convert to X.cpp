
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
��1+2+3+��+48+49�е������ӺŸĳɳ˺ţ��޸�λ�ò������ڣ���ʹ��ʽ
�ӵĽ����1225��Ϊ2015��
��˫ѭ�����������˺ŵ�λ�ã�����������i��j��ļӺŸ�Ϊ�˺ţ�
ʽ����ֵ�ı仯���ɣ�ע��j����ʼλ��Ϊi+2��
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
                cout<<i<<j<<endl;  //����couti���У���
        }
    }
}



*/






