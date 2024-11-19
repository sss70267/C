#include <stdio.h>
#include <stdlib.h>
int main(void)
{    
    char ch;
   
    printf("請輸入一個字元:");
    scanf("%c",&ch);
   //以ASCII分辨數字或是字元

    if(ch<=57 && ch>=48);                           //ASCI 0~9 
        printf("此字元是數字\n"); 
    if((ch<=90 && ch>=65) || (ch<=122 && ch>=97))   //ASCII a~z A~Z
        printf("此字元是英文字母\n"); 
      
   system("pause");
   return 0;
}

/*
第六章 牛刀小試 第1題
輸入數字說是字元進行條件片判斷
----------output----------
請輸入一個字元:0
此字元是數字

*/
