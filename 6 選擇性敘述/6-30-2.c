#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num;
   
    printf("請輸入一個整數:");
    scanf("%d",&num);
   
    if(num!=0)
    {
        if(num>0)
            printf("輸入數字大於0\n");
        else
            printf("輸入數字小於0\n");
    }
    else
        printf("輸入數字為0\n");
      
    printf("程式結束\n"); 

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第2題

輸入數字可以判別為0 or <0 or >0

----------output----------

請輸入一個整數:1
輸入數字大於0
程式結束

*/


