#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i=0,sum=0;
    
    start:
        i++;
        if(i%2!=0)
            sum+=i;
        if(i<100)
            goto start;

    printf("1~100奇數和為:%d",sum);
    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第24題

計算1~100的奇數總和

----------output----------

1~100奇數和為:2500

*/