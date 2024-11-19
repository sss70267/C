#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double f,c;
    printf("輸入華氏溫度:");
    scanf("%lf",&f);                            //輸入華氏溫度

    c=(f-32)*5/9.0;                             //攝氏溫度轉換
    printf("攝氏%.2f度=華氏%.2f度\n",f,c);

    system("pause");
    return 0;
}

/* 
第五章 牛刀小試 12題
輸入華氏溫度 轉換攝氏溫度
----------output----------
輸入攝氏溫度:20
攝氏20.00度=華氏68.00度

*/