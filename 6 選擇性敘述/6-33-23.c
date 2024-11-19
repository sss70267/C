#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int day;
    printf("輸入1~7整數:");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
            printf("今天要上班");
            break;
        case 2:
            printf("今天要上班");
            break;
        case 3:
            printf("今天要上班");
            break;
        case 4:
            printf("今天要上班");
            break;
        case 5:
            printf("今天要上班");
            break;
        case 6:
            printf("今天不用上班");
            break;
        case 7:
            printf("今天不用上班");
            break;
        default:
            printf("輸入錯誤");
            break;
            
    }

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第23題

運用switch
輸入1~7
輸入1~5 為要上班
輸入6 7 不用上班
輸入其他為 輸入錯誤

----------output----------

輸入1~7整數:8
輸入錯誤

*/