#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double miles,km;
    printf("輸入英哩:");
    scanf("%lf",&miles);
    
    km=miles*1.6;
    printf("英哩%.2f=公里%.2f",miles,km);

    //system("puase");
    return 0;
}

/* 
第五章 牛刀小試 13題
公哩轉公里數
----------output----------

輸入英哩:10
英哩10.00=公里16.00

*/