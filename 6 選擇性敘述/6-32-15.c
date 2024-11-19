#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int sum,pay,refund;
    int th,five_hun,hun,fifty,ten,five,one;
    printf("輸入應付金額:");
    scanf("%d",&sum);

    printf("輸入支付金額:");
    scanf("%d",&pay);
    refund = pay-sum;


    if(refund>=0)
    {
        /*
        th=refund/1000;
        five_hun=(refund-(th*1000))/500;
        hun=(refund-(th*1000)-(five_hun*500))/100;
        fifty=(refund-(th*1000)-(five_hun*500)-(hun*100))/50;
        ten=(refund-(th*1000)-(five_hun*500)-(hun*100)-(fifty*50))/10;
        one=(refund-(th*1000)-(five_hun*500)-(hun*100)-(fifty*50)-(ten*10));
        */
        
        th=refund/1000;
        refund-=th*1000;

        five_hun=refund/500;
        refund-=five_hun*500;

        hun=refund/100;
        refund-=hun*100;

        fifty=refund/50;
        refund-=fifty*50;

        ten=refund/10;
        refund-=ten*10;

        one=refund;

        printf("應找金額%d\n",refund);
        printf("找回 千鈔:%d張,伍佰鈔:%d張,百鈔:%d張,\n五十元:%d個,十元:%d個,一元:%d個\n"\
        ,th,five_hun,hun,fifty,ten,one);
    }
    else
        printf("金額不足");


    system("pause");
    return 0;
}

/*
第六章 牛刀小試 第15題

計算結帳找回的金額
千鈔 五百鈔 百鈔 五十元 十元 一元之數量


----------output----------

輸入應付金額:1000
輸入支付金額:9661
應找金額8661
找回 千鈔:8張,伍佰鈔:1張,百鈔:1張,
五十元:1個,十元:1個,一元:1個

*/