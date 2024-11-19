#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double radius,area;
    float pi=3.14f;
    
    printf("輸入球體半徑:");
    scanf("%lf",&radius);

    area = (4/3.0)*pi*(radius*radius*radius); //球體面積公式
    printf("球體體積為:%.2f",area);


    system("pause");
    return 0;
}
/* 
第五章 牛刀小試 17題
輸入半徑 計算球體面積 
----------output----------

輸入球體半徑:2
球體體積為:33.49 

*/