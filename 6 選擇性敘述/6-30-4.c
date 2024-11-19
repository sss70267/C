#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double num;
    printf("輸入數值:");
    scanf("%lf",&num);
    
    printf("%.2f的絕對值為%.2f\n",num,num*-1);

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第4題

把輸入的值變為絕對值

----------output----------

輸入數值:-11.11111
-11.11的絕對值為11.11

*/