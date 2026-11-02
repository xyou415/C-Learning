#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    int second=0;
    printf("请输入秒数:");
    scanf("%d",&second);
    int hour=second/3600;
    int rest1=second%3600;
    int minute=rest1/60;
    int rest2=rest1%60;
    printf("等于%d小时%d分钟%d秒\n",hour,minute,rest2);
    return 0;
}
