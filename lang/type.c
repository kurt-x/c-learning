// 结构体等数据形式

#include <stdio.h>

struct person
{
    char name[20];
    short age;
    float height;
};

struct person tom = { "Tom", 18, 175.0 };

// 创建一个匿名结构体
struct
{
    char title[20];
    char author[20];
} book = { "C Programming", "Kernighan" };

// 联合体
union data
{
    int i;
    float f;
    char c;
    long double ld;
    // 所有成员共享内存，大小为最大成员的大小 
};

// 枚举就是一个整型常量集合
enum color
{
    RED,    // 0
    GREEN,  // 1
    BLUE,   // 2
    YELLOW = 4,
    ORANGE, // 5
};

// typedef
typedef unsigned int uint; // 定义一个无符号整型的别名 uint
// 用 typedef 给一个匿名结构体命名
typedef struct
{
    char title[20];
    float price;
} Book;

typedef char * string; // 定义字符串引用类型别名 string

// 位字段
// 位字段是在一个 int 结构中拆分的
// 不管在一个结构中定义多少位字段，总大小都至少是 n * sizeof(int) 位，例如 32 位、64 位、96 位等
struct
{
    unsigned int a : 1; // 1 位
    unsigned int b : 2; // 2 位
    unsigned int c : 3; // 3 位
} bit_field;

int main()
{
    // 指定初始化器
    struct person jack = { .name = "Jack", .age = 20 }; // 没有初始化的字段会被自动初始化为零值

    printf("姓名：%s，年龄：%d，身高：%.2f\n", tom.name, tom.age, tom.height);
    printf("姓名：%s，年龄：%d，身高：%.2f\n", jack.name, jack.age, jack.height);
    
    struct person *jane = &(struct person){ "Jane", 22, 160.0 }; // 复合字面量
    printf("姓名：%s，年龄：%d，身高：%.2f\n", jane->name, jane->age, jane->height);
    // 对于一个结构指针，使用 -> 访问成员，例如 jane->name 等同于 (*jane).name

    struct person copied_tom = tom; // 将 tom 复制并赋值

    printf("person size: %zd\n", sizeof(struct person));

    union data d;
    d.i = 97;
    printf("union data: { i: %d, f: %d, c: %c, ld: %d }, size: %zd\n", d.i, d.f, d.c, d.ld, sizeof(d));
    d.c = 'z';
    printf("union data: { i: %d, f: %d, c: %c, ld: %d }, size: %zd\n", d.i, d.f, d.c, d.ld, sizeof(d));

    printf("enum color: { RED: %d, GREEN: %d, BLUE: %d, YELLOW: %d, ORANGE: %d }\n", RED, GREEN, BLUE, YELLOW, ORANGE);

    Book c_programming = { "C Programming", 39.99 };
    printf("book: { title: %s, price: %.2f }\n", c_programming.title, c_programming.price);

    string str = "hello", str2 = "world"; // 两个变量都是字符串引用类型
}
