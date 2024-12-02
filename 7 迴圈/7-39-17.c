#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i=1,sum=0;
    while(i<=10)
    {
        sum+=i*i;
        i++;
    }
    printf("1~10平方和為%d\n",sum);

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第17題

使用while 計算1~10的平方和

----------output----------

1~10平方和為385

*/