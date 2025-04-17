// 数据

int var; // 声明变量，变量名为 var，类型为 int
// var = 10; // 赋值，将 10 赋值给 var，这个步骤必须在方法或块内部，不能在全局作用域内

// 变量名可以由字母、数字、下划线组成，不能以数字开头，区分大小写
// 变量名不能是关键字，关键字是编程语言保留的，有特殊含义的单词，例如 int、char、if、else 等
// c99 和 c11 根据 UCN（Universal Character Names）规范支持中文变量名
int 整数 = 10;

const int con = 10; // 不能被修改的变量称为常量，const 修饰的变量不能被修改

// 字面量
// 字面量是指程序中直接使用的数据，例如 10、3.14、'a'、"hello" 等
// 整型字面量默认为 int 类型，浮点型字面量默认为 double 类型
// 整型字面量：10、0x10、010、0b10
// 浮点型字面量：3.14、3.14f、3.14e-2、3.14e2
// 字符型字面量：'a'、'\n'、'\0'、'\\'、'\''、'\"'
// 字符串字面量："hello"、"hello\nworld"、"hello\"world"

// 二进制
int bin = 0b10; // 二进制字面量，0b 或 0B 开头
// 八进制
int oct = 010; // 八进制字面量，0 开头
// 十六进制
int hex = 0x10; // 十六进制字面量，0x 或 0X 开头

int var2 = 20;          // 声明变量的同时赋值，变量名为 var2，类型为 int，值为 20
int var3 = 1, var4 = 2; // 声明多个变量

// c 语言中的数据类型包含基本数据类型和构造数据类型
// 基本数据类型：整型、浮点型、字符型、枚举型、空类型
// 构造数据类型：数组、结构体、共用体、指针、函数
// 各数据类型占用字节根据编译器和操作系统的不同而不同

// 整型
// 整型用于存储整数，包括有符号整型和无符号整型
// 整型默认为有符号整型
signed int sn = 10;        // 有符号整型，signed 可被省略
int n1 = 10;                // 根据寄存器大小，一般为 4 字节
short n2 = 10;              // 2 ~ 4 字节
long n3 = 10;               // 4 ~ 8 字节
long long n4 = 10;          // 8 字节
unsigned int n5 = 10;       // 无符号整型
unsigned short n6 = 10;     // 无符号短整型
unsigned long n7 = 10;      // 无符号长整型
unsigned long long n8 = 10; // 无符号长长整型

// 可以直接使用编译器自带的固定长度整型
#include <stdint.h>
int8_t i1 = 10;   // 1 字节
int16_t i2 = 10;  // 2 字节
int32_t i3 = 10;  // 4 字节
int64_t i4 = 10;  // 8 字节
uint8_t i5 = 10;  // 1 字节 无符号整型
uint16_t i6 = 10; // 2 字节 无符号整型
uint32_t i7 = 10; // 4 字节 无符号整型
uint64_t i8 = 10; // 8 字节 无符号整型

int si = 10;    // 默认为有符号整型
int si1 = 10U;  // 后缀 U 表示无符号整型
int si2 = 10L;  // 后缀 L 表示长整型
int si3 = 10UL; // 后缀 UL 表示无符号长整型

// 浮点型
// 浮点型用于存储小数，包括单精度浮点型和双精度浮点型
float f = 3.14;  // 4 字节
double d = 3.14; // 8 字节
long double ld = 3.14;

float f1 = 3.14F;       // 后缀 F 表示单精度浮点型
double d1 = 3.14;       // 默认为双精度浮点型
long double d3 = 3.14L; // 后缀 L 表示长双精度浮点型

// 科学计数法
float f2 = 3.14E-2; // 3.14 * 10^-2
double d2 = 3.14E2; // 3.14 * 10^2

// 布尔值
// C 语言没有内置的布尔类型，使用 1 和 0 代替，stdbool.h 头文件中定义了 bool、true、false
#include <stdbool.h>
bool b1 = true;
bool b2 = false;

// 字符型
// 字符型用于存储字符，底层存储为整数
// 部分编译器 char 默认为有符号整型，部分编译器 char 默认为无符号整型
// c99 和 c11 标准规定 char 为有符号整型
// 可以使用 signed char、unsigned char 明确指定有符号或无符号
char c1 = 'a'; // 1 字节
char c2 = 97; // 97 对应的字符为 a
char c3 = '\n'; // 换行符

#include <string.h>

// 字符串
// 字符串是一个或多个字符组成的数组
char name[40] = "abc";

// 数组
int months[12] = { 31, 28 }; // 声明一个整型数组，包含 12 个元素，初始化前两个元素
const int arr[3] = { 1, 2, 3 }; // 常量数组，不能修改，内部元素值也不能修改
int arr2[3] = { [2] = 3 }; // 初始化指定元素，其他元素初始化为 0
int *arr3 = (int[]){ 1, 2, 3 }; // 复合字面量，创建一个匿名数组

#include <stdio.h>

void fun(int ar[]) { printf("传参的数组尺寸：%zd，地址：%p\n", sizeof ar, ar); }

int main()
{
    printf("%d\n", 整数);

    // 数值溢出
    int max = 2147483647;
    unsigned int umax = 4294967295;

    printf("\n=== 数值溢出 ===\n");
    printf("打印 int 2147483647：%d\n", max);
    printf("打印 int 2147483647 + 1：%d\n", max + 1);
    printf("打印无符号 int 4294967295：%u\n", umax);
    printf("打印无符号 int 4294967295 + 1：%u\n", umax + 1);

    int len = strlen(name);

    char str[] = "hello world";
    printf("字符串大小：%zd\n", sizeof(str)); // 12，包含了字符串结束符 \0

    // 指针
    // & 表示获取一个变量在内存中的地址
    // * 表示指针变量，存储的是一个地址
    int value = 10;
    int *pointer = &value; // 需要声明指针变量指向的数据的类型

    char *pc; // 指向一个字符变量
    long *pl; // 指向一个长整型变量

    float *pf, f; // 这里 pf 是指向一个 float 类型变量的指针，f 是一个 float 类型变量

    f = 2.0;
    pf = &f;

    printf("打印地址参数：%p\n", &str);
    printf("打印指针指向的值：%d\n", *pointer); // * 也可用作取值
    *pointer = 20; // 修改指针指向的值
    printf("打印指针指向的值：%d\n", *pointer);

    // 数组就是第一个元素的地址
    printf("数组：\t\t\t%p\n", arr);
    printf("数组第一个元素地址：\t%p\n", &arr[0]);
    printf("数组第一个元素的值：\t%d\n", *arr);
    printf("数组第二个元素地址：\t%p\n", arr + 1);
    printf("数组第二个元素的值：\t%d\n", *(arr + 1));
    printf("数组第三个元素地址：\t%p\n", arr + 2);
    printf("数组第三个元素的值：\t%d\n", *(arr + 2));
    // 指针的加减法会将加减数乘以指向的元素的大小再进行计算
    printf("指针：\t\t%p\n", pointer);
    printf("指针 + 1：\t%p\n", pointer + 1);
    printf("&指针[1]：\t%p\n", &pointer[1]);

    printf("数组尺寸：%zd，地址：%p\n", sizeof arr, arr);
    fun(arr); // 数组传参传的是指针

    return 0;
}
