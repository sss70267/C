#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double base,height,area;

    printf("輸入四邊形底部長度:");
    scanf("%lf",&base);

    printf("輸入四邊形高長度:");
    scanf("%lf",&height);

    area=base*height;

    printf("四邊形 底=%.2f.高=%.2f.面積=%.2f",base,height,area);


    //system("puase");
    return 0;
}

/* 
第五章 牛刀小試 16題
輸入四邊形 高與底並計算成績
----------output----------

輸入四邊形底部長度:10
輸入四邊形高長度:10
四邊形 底=10.00.高=10.00.面積=100.00% 

*/