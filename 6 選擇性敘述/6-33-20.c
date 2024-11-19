#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    int number;
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
            printf("輸入數值錯誤");
    }

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第20題

運用switch
輸入數值 1=春天 2=夏天 3=秋天 4=冬天

----------output----------

輸入1~4整數:6
輸入數值錯誤

*/