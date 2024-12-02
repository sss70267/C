#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i=0;

    while(1)
    {   
        i++;
        if(i%3==1 && i%5==3 && i%7==2)  
            break;

    }

    printf("最少有%d隻兔子\n",i);

    printf("%d/3...%d\n",i,i%3);
    printf("%d/5...%d\n",i,i%5);
    printf("%d/7...%d\n",i,i%7);

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第34題

計算兔子數量 
1.三隻三隻數之,剩下兩隻
2.五隻五隻數之,剩下三隻
3.七隻七隻數之,剩下一隻
求兔子最少的數量

----------output----------

最少有58隻兔子
58/3...1
58/5...3
58/7...2

*/