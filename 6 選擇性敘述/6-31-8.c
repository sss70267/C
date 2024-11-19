#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int a=3,b=4,c=5;
    int pow_a=pow(a,2),pow_b=pow(b,2),pow_c=pow(c,2);       //各個邊的平方 計算直角 銳角 鈍角 三角形的判斷

    if(a+b>c && a+c>b && b+c>a)
    {
        printf("可構成三角形\n");
        if(pow_a+pow_b==pow_c || pow_a+pow_c==pow_b || pow_b+pow_c==pow_a)
            printf("直角三角形\n");
        else if(pow_a+pow_b<pow_c || pow_a+pow_c<pow_b || pow_b+pow_c<pow_a)
                printf("鈍角三角形\n");
            else if(pow_a+pow_b>pow_c || pow_a+pow_c>pow_b || pow_b+pow_c>pow_a)
                    printf("銳角三角形\n");
    }
    else
        printf("不是三角形");

}

/*
第六章 牛刀小試 第8題

判斷是 1.直角三角形2.鈍角三角形3.銳角三角形

----------output----------

可構成三角形
直角三角形 

*/