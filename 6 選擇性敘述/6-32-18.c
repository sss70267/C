#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float cm,weight;
    printf("輸入身高 體重(空白間隔):");
    scanf("%f %f",&cm,&weight);

    (cm<180 && weight>=90) ? printf("身材過胖") : printf("身材標準");

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第18題

以簡易版if判斷體重是否標準

身高低於180 且 體重高於90 顯示身材過胖
否則顯示體重標準

----------output----------

輸入身高 體重(空白間隔):171.1 90
身材過胖

*/