#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int month;
    printf("輸入月份(整數):");
    scanf("%d",&month);

    if(month>=3 && month<=5)
        printf("春季");
    else if(month>=6 && month<=8)
            printf("夏季");
        else if(month >=9 && month<=11)
                printf("秋季");
            else
                printf("冬季");
    

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第13題

輸入月份 顯示當季季節


----------output----------

輸入月份(整數): 5
春季    

*/