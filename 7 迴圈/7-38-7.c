#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("1~100可以被6整除:");
    for(int i=1;i<101;i++)
        if(i%6==0)
            printf("%d ",i);

    printf("\n");
    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第7題

印出1~100可以被6整除的數

----------output----------

1~100可以被6整除:6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96 

*/