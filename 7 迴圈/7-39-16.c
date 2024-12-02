#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch='\0';
   while((ch!=97) && (ch!=98))			/* 當按下的鍵不是Ctrl+q時 */
   {
       ch=getchar();			/* 從鍵盤取得字元 */
       
       printf("ASCII of ch= %d\n",ch);	/* 印出取得字元的ASCII碼 */
       fflush(stdin);
   }
    printf("您已按了%c\n",ch);
   
   system("pause");
   return 0;
}

/*
第七章 牛刀小試 第16題

輸入a,b停止迴圈,否則一直重複輸入

----------output----------

f
ASCII of ch= 102
f
ASCII of ch= 102
h
ASCII of ch= 104
d
ASCII of ch= 100
e
ASCII of ch= 101
c
ASCII of ch= 99
b
ASCII of ch= 98
您已按了b

*/