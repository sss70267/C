#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>               //大小寫轉換標頭檔

int main(void)
{
    char ch;
    printf("輸入A or B:");
    scanf("%c",&ch);

    switch(toupper(ch))         //輸入英文大小寫都可以
    {
        case 'A':
            printf("你輸入的是A\n");
            break;
        case 'B':
            printf("你輸入的是B\n");
            break;
        default:
            printf("請輸入a or b\n");
            
    }

    //system("pause");
    return 0;
}

/*
第六章 牛刀小試 第22題

運用switch
修改21題輸入大小寫AB
都會得到  你輸入的是A
         你輸入的是B
----------output----------

輸入A or B:a
你輸入的是A

*/