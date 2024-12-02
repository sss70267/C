#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,n;
    double sum=0.0f;
    printf("輸入一個整數:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    
        sum+= 1.0f/i;

    printf("1/1+1/2+1/3.......+1/%d=%.14lf",n,sum);
        

    printf("\n");
    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第10題

計算1/1+1/2+1/3.......+1/n的總和

----------output----------

輸入一個整數:50
1/1+1/2+1/3.......+1/50=4.49920539185405

*/