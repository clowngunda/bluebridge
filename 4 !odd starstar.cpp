/*
�ǵ���������⣬��Ҫ�����һ���ַ���s�������width�ضϺ��ڹ̶����Ϊwidth������Ϊ���š�|���ľ��������
�����ѵ�����Ŀ������printf(��%*s%s%*s��,___)��Ҫ����printf��ʵ���б�
*/
#include "stdio.h"
#include "string.h"

int main()
{
    char s[100]="abcd1234";
    char buf[1000];
    int width=20;

    strcpy(buf,s);

    buf[width-2]=0;

    printf("|%*s%s%*s|\n",(width-strlen(buf)-2)/2,"",buf,
           (width-strlen(buf)-2)/2,"");
    return 0;






    }



