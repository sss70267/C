#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("1~100可以被3,7整除:");
    for(int i=1;i<101;i++)
        if(i%3==0 && i%7==0)
            printf("%d ",i);

    printf("\n");
    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第8題

印出1~100可以被3,7整除的數

----------output----------

1~100可以被3,7整除:21 42 63 84 

*/