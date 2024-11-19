#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float hour;
    int salary=0;

    printf("輸入上班時數:");
    scanf("%f",&hour);
    if(hour>=0)
    {
        if(hour<60)
            salary=hour*75;
        else if(hour>60 && hour<=75)
            salary=(60*75)+(hour-60)*75*1.25;
            else if(hour>75)
                salary=(60*75)+(15*75)*1.25+(hour-75)*75*1.75;
        printf("工作時數為%.1f,薪水為:%d\n",hour,salary);
    }
    else
        printf("時數不能小於0\n");

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第11題

輸入上班時數計算薪水
60小時內 時薪75
61~75小時 時薪75*.1.25
75小時以上 時薪75*1.75

----------output----------

輸入上班時數:76
工作時數為76.0,薪水為:6037

*/