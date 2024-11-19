#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    int number;
    start:
    printf("輸入1~4整數:");
    scanf("%d",&number);

    switch(number)
    {
        case 1:
            printf("春天");
            break;
        case 2:
            printf("夏天");
            break;
        case 3:
            printf("秋天");
            break;
        case 4:
            printf("冬天");
            break;
        default:
            goto start;
    }

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第26題

運用goto switch 使數值輸入1~4以外的值需要重新輸入 
輸入數值 1=春天 2=夏天 3=秋天 4=冬天

----------output----------

輸入1~4整數:5
輸入1~4整數:5
輸入1~4整數:6
輸入1~4整數:7
輸入1~4整數:8
輸入1~4整數:9
輸入1~4整數:4

*/