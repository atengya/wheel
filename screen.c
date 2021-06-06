//筛选函数,令输入正确
#include<stdio.h>
void screen();
void screen()
{   int x=-1;//替换x;
    do
    {
        printf("please enter a interger\n");
        scanf("%d",&x);
        while(getchar()!='\n')//清除键盘//也可用fflush(stdin);
        {
            ;
        }
    }
    while(x>100||x<0);   //条件,可替换
}