#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,i;
    printf("輸入一個整數");         
    scanf("%d",&n);             //輸入n的值

    printf("%d的公因數有:",n);
    for(i=1;i<=n;i++)           
        if(n%i==0)              //印出可以被整除的數
            printf("%d ",i);
    printf("\n");

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第6題

計算輸入的整數的公因數

----------output----------

輸入一個整數24
24的公因數有:1 2 3 4 6 8 12 24 

*/