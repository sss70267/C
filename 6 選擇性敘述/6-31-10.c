#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double x,y;
    printf("輸入x,y軸座標(空白間隔):");
    scanf("%lf %lf",&x,&y);

    if(x>0&&y>0)
        printf("第一象限");
    else if(x<0&&y>0)
            printf("第二象限");
        else if(x<0&&y<0)
                printf("第三象限");
            else if(x>0&&y<0)
                    printf("第四象限");
                else if(x==0)
                        printf("x軸");
                    else 
                        printf("y軸");


    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第10題

計算(x,y)判斷在第幾象限或是x軸y軸

----------output----------

輸入x,y軸座標(空白間隔):10 0
y軸

*/