// 头文件

void function();

void init()
{
    function();
}

#include <stdio.h>

#define CONST 1

typedef unsigned int uint;

// 头文件可以写任意代码，但是一般用作声明

void const_arg(int arr[const]); // 不能修改 arr 的值，可以修改 arr 指向的内容

void static_arg(int arr[static 20]); // 表示 arr 至少有 20 个元素

void restrict_arg(int arr[restrict]); // 表示 arr 指针是该数组的唯一访问方式
