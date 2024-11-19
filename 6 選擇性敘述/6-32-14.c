#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int year;
    printf("輸入西元年份:");
    scanf("%d",&year);
    
    if((year%4)==0 && (year%100)!=0 || (year%400) ==0 && (year%4000!=0))
        printf("是閏年");
    else
        printf("不是閏年");

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第14題

輸入西元年判斷是否為閏年


----------output----------

輸入西元年份:2004
是閏年 

*/