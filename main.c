#include <stdio.h>
int main()
{
    char grade;
    printf("Enter a grade: ");
    scanf("%c", &grade);
    do
    {
        switch (grade)
        {
            case 'A':
            printf("优秀\n");
            break;
            case 'B':
            printf("良好\n");
            break;
            case 'C':
            printf("及格\n");
            break;
            case 'D':
            printf("不及格\n");
            break;
            default:
            printf("输入错误\n");
            break;
        }
        scanf(" %c", &grade);
    }while(grade != 'X');
    return 0;
}