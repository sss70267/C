#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int password=1234,key,n;

    for(n=1;n<=3;n++)
    {
        printf("輸入密碼");
        scanf("%d",&key);
        
        if(key==password)
        {
            printf("密碼輸入正確\n");
            break;
        }

        if(n>=3)
        {
            printf("密碼輸入超過3次\n");
            break;
        }
        
    }



    //system("pause");
    return 0;
}

/*
第七章 牛刀小試 第30題

改寫習題29 使用for迴圈
輸入4個數字密碼
1.密碼不對重新輸入
2.輸入3次都不對顯示密碼輸入超過3次
3.輸入正確顯示 "密碼輸入正確"

----------output----------

輸入密碼1
輸入密碼2
輸入密碼1234
密碼輸入正確

*/