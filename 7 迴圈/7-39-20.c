#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,times=0;
    do{
        do
        {
            printf("\n輸入1~50整數:");
            scanf("%d",&n);
        
        }while((n<1) || (n>50));            //判斷輸入的整數是否在1~50之間


        for(int i=0;i<n;i++)                //根據輸入的整數印出相對應的 * 符號
            printf("*");
        printf("\n");

        times++;                            
        printf("輸入第%d次\n",times);
    }while(times<3);                        //執行3次

    

    system("pause");
    return 0;
}
/*
第七章 牛刀小試 第20題

分3次輸入整數,輸入n印出n個*符號,n需要在1~50之間

----------output----------

輸入1~50整數:2
**
輸入第1次

輸入1~50整數:1
*
輸入第2次

輸入1~50整數:3
***
輸入第3次

*/