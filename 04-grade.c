//
// Created by youuu on 2026/11/3.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("chcp 65001 > nul");
    int grade=0;
    printf("请输入成绩:");
    scanf("%d",&grade);
    if (grade<60)
    {
        printf("不及格\n");
    }
    else if (grade<80)
    {
        printf("及格\n");
    }
    else if (grade<90)
    {
        printf("良好\n");
    }
    else
    {
        printf("优秀\n");
    }
    return 0;
}





