/*
是道代码填空题，主要是完成一个字符串s，按宽度width截断后，在固定宽度为width，两边为符号’|’的居中输出。
　　难点是题目给出了printf(“%*s%s%*s”,___)，要求填printf的实参列表。
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



