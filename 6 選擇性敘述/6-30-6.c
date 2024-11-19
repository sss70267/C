#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double cm,weight;

    printf("輸入身高(cm)體重(kg)空白間隔：");
    scanf("%lf %lf",&cm, &weight);
    if(cm<180 && weight>=90)
        printf("體重過重\n");
    else   
        printf("標準體重\n");

    printf("身高為:%.2f,體重為:%.2f\n",cm,weight);
    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第6題

輸入身高體重 身高低於180 體重高於90 印出體重過重,否則為體重標準

----------output----------

輸入身高(cm)體重(kg)空白間隔：181 79
標準體重
身高為:181.00,體重為:79.00

*/