#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum=0,i;
    printf("輸入一個整數:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
        sum+=i;
    printf("1+3...+%d=%d\n",i-2,sum);  //偶數會多加2需要扣除

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第3題

輸入一個整數 計算1+3.....+n的總和

----------output----------

輸入一個整數: 11
1+3...+11=36

*/