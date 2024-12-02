#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n=0,sum=0;
    do
    {
        n++;
        sum+=n;
    }while(sum<=1000);

    printf("1+2+3+4....+%d>=%d\n",n,sum);

    

    system("pause");
    return 0;
}
/*
第七章 牛刀小試 第19題

使用do while 1+2+3...+n >= 1000

----------output----------

1+2+3+4....+45>=1035

*/