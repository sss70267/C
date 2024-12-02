#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,i,sum=0;

    do
    {
        printf("輸入一個偶數:");
        scanf("%d",&n);
    }while(n%2!=0);

    for(i=0;i<=n;i+=2)
        sum+=i;
    
    printf("2+4....+%d=%d\n",n,sum);

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第18題

使用do while判斷是否為偶數

偶數:計算偶數總和

奇數:重複輸入整數

----------output----------

輸入一個偶數:1
輸入一個偶數:3
輸入一個偶數:5
輸入一個偶數:7
輸入一個偶數:8
2+4....+8=20

*/