#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");
    double C=0;
    printf("请输入摄氏度：");
    scanf("%lf",&C);
    double F=C*9.0/5+32;
    printf("华氏度为%.4f",F);
    return 0;
}
