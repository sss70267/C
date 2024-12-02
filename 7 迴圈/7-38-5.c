#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,sum=0;
    printf("可被3和8整除的數有:");
    for(i=1;i<=100;i++)
        if(i%3==0 && i%8==0)
        {
            printf("%d ",i);
            sum+=i;
        }

    printf("\n1~100可被3和8整除的數總和為:%d\n",sum);

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第5題

計算1~100可以被3和8整除的數相加總和

----------output----------

可被3和8整除的數有:24 48 72 96 
1~100可被3和8整除的數總和為:240

*/