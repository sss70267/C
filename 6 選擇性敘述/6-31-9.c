#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int students[10],a_s=0,b_s=0,c_s=0;

    for(int i=0;i<10;i++)
    {
        printf("輸入第%d為成績:",i+1);
        scanf("%d",&students[i]);
        if(students[i]>=0 && students[i] <= 59)
        {    
            printf("C\n");
            c_s++;
        }
        else if(students[i]>=60 && students[i] <= 75)
                {
                    printf("B\n");
                    b_s++;
                }
            else if(students[i]>=76 && students[i] <= 100)
                    {
                        printf("A\n");
                        a_s++;
                    }
    }
    
    printf("得到A的學生有:%d位",a_s);
    printf("得到B的學生有:%d位",b_s);
    printf("得到C的學生有:%d位",c_s);
    system("pause");
    return 0;
}
/*
第六章 牛刀小試 第9題

輸入10位學生成績 判斷等級A B C
並印出取得A B C等級的人數

----------output----------

輸入第1為成績:10
C
輸入第2為成績:20
C
輸入第3為成績:30
C
輸入第4為成績:40
C
輸入第5為成績:50
C
輸入第6為成績:60
B
輸入第7為成績:70
B
輸入第8為成績:80
A
輸入第9為成績:90
A
輸入第10為成績:100
A
得到A的學生有:3位得到B的學生有:2位得到C的學生有:5位 

*/