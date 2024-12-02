#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    int n;

    printf("輸入整數:");
    scanf("%d",&n);

    if(n==2)
        printf("是質數");

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("不是質數\n");
            break;
        }
        else
        {
            printf("是質數\n");
            break;
        }
        
    }

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第32題

輸入整數判斷質數


----------output----------

輸入整數:97
是質數

*/