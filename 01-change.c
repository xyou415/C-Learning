#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    int price=0,count=0;
    const int AMOUNT=200;
    printf("请输入价格：");
    scanf("%d",&price);
    printf("请输入数量；");
    scanf("%d",&count);
    int total=price*count;
    int rest=AMOUNT-total;
    printf("总价为；%d\n",total);
    printf("剩余金额为%d",rest);
    return 0;
}
