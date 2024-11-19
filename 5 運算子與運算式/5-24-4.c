#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double miles,km;
    printf("輸入公里:");
    scanf("%lf",&km);
    
    miles=km/1.6;
    printf("英哩%.2f=公里%.2f",miles,km);

    //system("puase");
    return 0;
}

/* 
第五章 牛刀小試 15題
公里轉換公哩
----------output----------

輸入公里:16
英哩10.00=公里16.00

*/