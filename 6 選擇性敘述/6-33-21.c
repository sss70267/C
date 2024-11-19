#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    char ch;
    printf("輸入a or b:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
            printf("您輸入a");
            break;
        case 'b':
            printf("您輸入b");
            break;
        default:
            printf("輸入不是a or b");
    }

    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第21題

運用switch
輸入a或是b如果不是顯示不是a或b,並顯示輸出

----------output----------

輸入a or b:a
您輸入a

*/