#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a=4,b=6,larger=0;

    a>b ? (larger=a) : (larger=b);  //需要先括號起來,避免運算子順序導致錯誤
    printf("%d數值較大\n",larger);

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第19題

運用簡易版if
比較大小並配制larger變數

----------output----------

6數值較大

*/