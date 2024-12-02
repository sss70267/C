#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int sum;                      //總額
    for(int i=1;i<1001;i++)
    {    
        sum=0;                    //每次執行預設為0
        for(int j=1;j<i;j++)
        {
            if(i%j==0)          //找到i的公因數
                sum+=j;         //計算i公因數總和
        }
        if(sum==i)              //確認公因數總和是否與i相等
        printf("%d ",sum);
    }
    printf("是完美數\n");
    
    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第11題

找出1000內的完美數

----------output----------

6 28 496 是完美數

*/