#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a=4,b=5,c=6;

    if(a+b>c && a+c>b && c+b>a)
        printf("可以構成三角形\n");
    else
        printf("無法構成三角形\n");
    //system("pause");
    return 0;
}

/*
第六章 牛刀小試 第7題

判斷是否可以構成三角形 兩邊相加大於另外一邊

----------output----------

可以構成三角形

*/