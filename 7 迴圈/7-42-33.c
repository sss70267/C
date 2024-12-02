#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,n,flag=0;

    printf("輸入整數:");
    scanf("%d",&n);

    for(i=n-1;i>2;i--)          //從最大數值找
    {
        flag=0;                 //設定條件職
        for(j=2;j<(n/2);j++)
        {
            if(i%j==0)          //餘數為0代表不是質數
            {
                flag=1;         //條件值改為1
                break;
            }
        }
        if(flag==0)             //條件值0代表為質數中段迴圈
        {
            printf("%d的最大質數為:%d\n",n,i);     //印出最大值質數
            break;
        }
    }
    
    system("pause");
    return 0;
}


/*
第七章 牛刀小試 第33題

輸入整數找出最大質數


----------output----------

輸入整數:100
100的最大質數為:97

*/