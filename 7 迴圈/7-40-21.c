#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d",i);
        printf("\n");
    }



    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第21題

使用巢狀迴圈印出
1
22
333
4444
55555

----------output----------

1
22
333
4444
55555

*/