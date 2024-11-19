#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num;
    printf("輸入一個整數:");
    scanf("%d",&num);

    if(num!=0 && num>0)
    {
        if(num%2==0)
            printf("%d是偶數",num);
        else
            printf("%d是奇數",num);
    }
    else
        printf("輸入的值不能為0或是小於0\n");

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第3題

判斷輸入的值為偶數或是奇數

----------output----------

輸入一個整數:2
2是偶數%

*/