#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float weight;
    printf("輸入體重:");
    scanf("%f",&weight);

    printf("你的體重為:%.2f,",weight);
    weight>=90 ? printf("體重過重") : printf("體重標準");

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第17題

以簡易版if判斷體重是否標準

----------output----------

輸入體重:90
你的體重為:90.00,體重過重%

*/