#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int r;
    int sum;            //計算總和
    int arm;            //armstrong數
    int arm_int;        //拆分整數用370 >> 3^3 7^3 0^3

    printf("armstrong數:");
    for(int i=1;i<1000;i++)
    {    
        sum=0;
        arm=i;
        arm_int=i;
        while(arm_int!=0)
        {    
            r=arm_int%10;
            arm_int/=10;
            sum+=r*r*r;
        }
        if(arm==sum)            //確認加總是否與arm數相等
            printf("%d ",arm);
    }
    printf("\n");
    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第12題

找到1000以內armstrong整數

----------output----------

armstrong數:1 153 370 371 407 

*/