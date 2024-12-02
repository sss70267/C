#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int sum=0,i,j;
    for(i=1,j=2;i<=49;i+=2,j+=2)
        sum += i*i-j*j;
        
    printf("1^2-2^2+3^2-4^2.......+49^2-50^2=%d",sum);
        

    printf("\n");
    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第9題

計算"1^2-2^2+3^2-4^2.......+49^2-50^2的總和

----------output----------

1^2-2^2+3^2-4^2.......+49^2-50^2=-1275

*/