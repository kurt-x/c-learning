// 预处理

#include <stdio.h>

// defile 硬编码，会将所有 PI 替换为 3.14
#define PI 3.14

// 类函数宏
#define add(x, y) ((x) + (y))
// 字符串化宏形参
#define STR(x) #x

// 连接宏形参
#define NAME(n) var ## n

// 变参宏
#define PR(fmt, ...) printf(fmt, __VA_ARGS__)

// #define DEBUG

// #error This is an error // 抛出一个预处理错误

#pragma message("hello world")

// 泛型宏
#define prt_type(v) _Generic((v), int: printf("int: %d\n", v), char: printf("char: %c\n", v))

// 可变参数
#include <stdarg.h>
// 必须有一个形参提供参数的个数
void variable_args(const int count, ...)
{
    va_list args;                   // 定义一个参数列表
    va_start(args, count);          // 初始化参数列表
    int arg = va_arg(args, int);    // 获取参数
    printf("arg: %d\n", arg);
    va_end(args);                   // 结束参数列表
}

int main()
{
    printf("add: %d\n", add(1, 2));

    puts(STR(Hello World!));

    int NAME(1) = 10;

    printf("var1: %d\n", var1);

    PR("var2: %d\n", 20);

    // #line 1000 "test.c" // 重置当前行号和文件名

    // __func__ 是预定义标识符，只能在函数体内使用，值为当前函数名
    PR("%s %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __func__, __LINE__);
    PR("C version: %ldL\n", __STDC_VERSION__);

    #ifdef DEBUG
    PR("DEBUGGING...\n");
    #endif

    // 泛型
    int v = 256;
    _Generic(
        v,
        int: printf("int: %d\n", v),
        char: printf("char: %c\n", v)
    );

    int v1 = 10;
    char v2 = 'A';
    prt_type(v1);
    prt_type(v2);

    variable_args(3, 1, 2, 3);
}

#undef PI // 取消宏定义
