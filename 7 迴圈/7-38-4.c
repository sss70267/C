#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    for(int i=41;i<=64;i++)
        printf("ascii: %d = %c\n",i,i);

    system("pause");
    return 0;
}

/*
第七章 牛刀小試 第4題

使用for印出41~64的ASCII編碼

----------output----------

ascii: 41 = )
ascii: 42 = *
ascii: 43 = +
ascii: 44 = ,
ascii: 45 = -
ascii: 46 = .
ascii: 47 = /
ascii: 48 = 0
ascii: 49 = 1
ascii: 50 = 2
ascii: 51 = 3
ascii: 52 = 4
ascii: 53 = 5
ascii: 54 = 6
ascii: 55 = 7
ascii: 56 = 8
ascii: 57 = 9
ascii: 58 = :
ascii: 59 = ;
ascii: 60 = <
ascii: 61 = =
ascii: 62 = >
ascii: 63 = ?
ascii: 64 = @

*/