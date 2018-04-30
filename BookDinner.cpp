
#include <stdio.h>
#include <stdlib.h>
/*
Author:代俊建
*/
#define fee_8 8
#define fee_5 5
int main()
{
    int n;
    double totalPrice = 0,num[100];

	printf("开始订外卖~~\n");
    printf("请输入预定菜品数量:");
    scanf("%d",&n);

    printf("请输入每个菜的价格(单位元):");
	//计费餐品费用
    for(int i = 0 ; i< n; i++)
    {
        scanf("%lf",&num[i]);
        totalPrice += num[i];
    }

	//计算总费用
	if(totalPrice < 20){
		printf("您此次外卖费小于20元,不予配送,抱歉");
	}
    else if(totalPrice >= 20 && totalPrice < 30){
        totalPrice += fee_8;
        printf("您此次外卖费:%.2lf元,含送餐费%d元\n",totalPrice,fee_8);
    }
	else if(totalPrice >=30 && totalPrice < 40){
        totalPrice += fee_5;
        printf("您此次外卖费:%.2lf元,含送餐费%d元\n",totalPrice,fee_5);
    }
	else{
        printf("您此次外卖费,原价:%.2lf元,折后价:%.2lf元,免送餐费\n",totalPrice,totalPrice*0.9);
    }

   return 0;

}
