#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double f,c;
    printf("輸入攝氏溫度:");
    scanf("%lf",&c);                            //輸入攝氏溫度

    f=(9/5.0)*c+32;                             //華氏溫度轉換
    printf("攝氏%.2f度=華氏%.2f度\n",c,f);

    system("pause");
    return 0;
}

/* 
第五章 牛刀小試 11題
輸入攝氏溫度 計算華氏溫度
----------output----------
輸入攝氏溫度:20
攝氏20.00度=華氏68.00度

*/