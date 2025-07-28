// inline.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "my_math.h"
using namespace std;



/*
函数优点：
1、节省内存空间
2、增加软件维护性



函数缺点：
1、性能低
*/

int my_add(int n1,int n2) {
    return n1 + n2;
}

/*
宏优点:
1、维护性好
2、性能高

宏缺点:
1、占用内存高





如何选择函数还是宏（计算性价比 谁高用谁）
1、当函数实现简单占用内存少，优先使用宏
2、否则使用函数

宏的问题：
1、不好计算性价比
2、带参宏bug，没有类型信息
3、宏无法调试


*/
#define MY_ADD(n1,n2)((n1)+(n2))




/*

内联函数（写函数自动会转换使用宏还是函数）
1、由编译器根据代码决定是否内联
2、debug不内联，release才会内联
3、函数声明和实现都可以加内联，通常加在实现处
4、内联函数不能在.cpp和.h分开放（预处理问题）
*/

//inline int  my_inline_add(int n1,int n2) {
//    return n1 + n2;
//}

int main()
{   
    //  便于维护但性能低
    cout << "fun:1+2=" << my_add(1, 2) << endl;
    cout << "fun:3+2=" << my_add(3, 2) << endl;

    //  追求性能直接计算不适用函数效率最优 不便于维护
    cout << "1+2=" << 1 + 2 << endl;
    cout << "2+2=" << 2 + 2 << endl;
    cout << "3+2=" << 3 + 2 << endl;

    //  使用宏优化了直接计算的缺点维护低，运行时将会转换成为直接计算
    cout << "define: 1+2=" << MY_ADD(1,2) << endl;
    cout << "define: 3+2=" << MY_ADD(3,2) << endl;
    //  带参宏bug，没有类型信息
    cout << "define: qqqqq+2=" << MY_ADD("qqqqq", 2) << endl;


    //  内联函数
    cout << "inline: 1+3=" << my_inline_add(1, 3) << endl;
    
    return 0;
}