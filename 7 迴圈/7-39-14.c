#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float rope=3000;
    int days=0;

    while(rope>=5)
    {
        rope/=2;
        days++;
    }
    printf("繩子剩餘%.2f公尺,需要剪%d天\n",rope,days);

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第14題

繩子3000公尺,每天剪一半,需要剪幾天才會低於5公尺.

----------output----------

繩子剩餘2.93公尺,需要剪10天

*/