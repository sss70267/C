#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
            printf(" ");            //第一次印出4個空白  3 >> 2 >> 1 >> 0個 

        for(j=1;j<=i;j++)
            printf("%d", j);
        printf("\n");
    }



    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第22題

使用巢狀迴圈印出
    1
   12
  123
 1234
12345

----------output----------

    1
   12
  123
 1234
12345

*/