// 流程控制

#include <stdio.h>

int i;

int main()
{
    // while 循环
    i = 0;
    while (1) // 无限循环，除非内部逻辑退出
    {
        printf("while loop %d start\n", ++i);
        if (i == 2) continue; // 下一次循环
        if (i == 4) break; // 退出循环
        printf("while loop %d end\n", i);
    }
    printf("while loop end\n");

    // for 循环
    // 初始化计语句; 循环条件; 更新语句
    for (i = 1; i < 5; i++)
    {
        printf("for loop %d start\n", i);
        if (i == 2) continue;
        if (i == 4) break;
        printf("for loop %d end\n", i);
    }

    // 多个计数器
    for (int x = 0, y = 5; x < y; x++, y--) { }
    for (;;) // 任意部分都可以省略
    {
        if (i == 10) break;
        i++;
    }

    // do while 循环
    // 必定执行一次循环体
    i = 0;
    do
    {
        printf("do while\n");
    } 
    while (i != 0);

    label: int a = 0; // 标签

    int condition = 0;
    if (condition) goto label; // 跳转到标签
}
