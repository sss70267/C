#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,i,sum=0;
    printf("輸入一個整數");
    scanf("%d",&n);

    while(n%2!=0)
    {
        printf("請輸入偶數整數:");
        scanf("%d",&n);
    }

    for(i=2;i<=n;i+=2)
        sum+=i;

    printf("2+4+6...+%d=%d\n",n,sum);
    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第13題

輸入一個整數,奇數時重新輸入整數,偶數時計算2+4+6....+n=sum

----------output----------

輸入一個整數7
請輸入偶數整數:8
2+4+6...+8=20

*/