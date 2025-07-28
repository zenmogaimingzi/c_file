// default.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;




/*
缺省参数（默认参数）
1、缺省参数只能从右向左设置，中间不能间断
2、如果函数有声明和实现，声明和实现不能同时定义缺省参数
3、缺省参数应当放在声明中
*/
void my_setlocale(int category = LC_ALL, const char* locale = "chinese") {
    cout << "category:" << category << "locale:" << locale << endl;
    setlocale(category, locale);
}

void my_fopen(const char* path, const char* mode = "r");

int main()
{
    my_setlocale();
    //setlocale(LC_ALL, "chinese");
    wprintf(L"UNICODE 你好\n");
    printf("MBCS 你好\n");

    my_setlocale(LC_ALL, "english");
    wprintf(L"UNICODE Hello\n");
    printf("MBCS Hello\n");

    my_fopen("11", "s");
    return 0;
}

void my_fopen(const char* path, const char* mode) {
}