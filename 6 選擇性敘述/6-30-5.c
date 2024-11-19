#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double weight;
    printf("輸入體重:");
    scanf("%lf",&weight);

    if(weight>90)
        printf("體重過重");
    else
        printf("標準體重");


    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第5題

使用if判斷體重

----------output----------

輸入體重:65
標準體重

*/