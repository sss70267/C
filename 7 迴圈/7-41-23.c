#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf("輸入1~9:");
        scanf("%d",&n);

    } while(n<=0 || n>9);

    int i,j;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=9;j++)
            printf("%d*%d=%2d  ",i,j,i*j);
        printf("\n");
    }



    system("pause");
    return 0;
}


/*
第七章 牛刀小試 第23題

輸入數字1~9輸出99乘法表

----------output----------

輸入1~9:3
1*1= 1  1*2= 2  1*3= 3  1*4= 4  1*5= 5  1*6= 6  1*7= 7  1*8= 8  1*9= 9  
2*1= 2  2*2= 4  2*3= 6  2*4= 8  2*5=10  2*6=12  2*7=14  2*8=16  2*9=18  
3*1= 3  3*2= 6  3*3= 9  3*4=12  3*5=15  3*6=18  3*7=21  3*8=24  3*9=27 

*/