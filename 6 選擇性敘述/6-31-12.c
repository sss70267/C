#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float socre;
    char eva;
    printf("輸入學生分數:");
    scanf("%f",&socre);

    if(socre>=0 && socre <101)
    {
        if(socre>80)
            eva = 'A';
        else if(socre>=60 && socre<=80)
                eva = 'B';
            else
                    eva = 'C';
            
        printf("分數為:%.1f,評價為:%c\n",socre,eva);
    }
    else
        printf("輸入不正確");

    //system("pause");
    return 0;

}

/*
第六章 牛刀小試 第12題

輸入學生分數評分
81~100分為:A
60~80分為:B
0~59分為:C

----------output----------

輸入學生分數:87.7
分數為:87.7,評價為:A

*/