#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("1~100可被2、3整除但不可以被12整除的數:\n");
    for(int i=1;i<=100;i++)
    {
        if(i%2==0 && i%3==0 && i%12!=0)
        {
            printf("%d ",i);
            continue;
        }

    }

    printf("\n");
    return 0;
}

/*
第七章 牛刀小試 第31題

利用continue找出 1~100 可以被2,3整除但是不能被12整除的數


----------output----------

1~100可被2、3整除但不可以被12整除的數:
6 18 30 42 54 66 78 90 

*/