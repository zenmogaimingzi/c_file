// overload.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
using namespace std;

inline int my_add(int n1, int n2) {
    return n1 + n2;
}

inline double my_add(double n1, double n2) {
    return n1 + n2;
}

inline long long  my_add(long long  n1, long long  n2) {
    return n1 + n2;
}

inline char* my_add(char* n1, char* n2) {

    char buf[260];
    strcpy(buf, n1);
    strcat(buf, n2);
    return buf;
}

#define MY_ADD(n1,n2)((n1)+(n2));



/*
函数重载(overload)==> 解决名称问题

由传递参数自动选择函数
什么情况下函数构造重载
1、函数作用域一致
2、函数名称相同
3、返回值类型不作为重载的依据
4、参数类型不同或者个数不同或者类型顺序不同构成重载
5、const参数重载识别
6、typedef类型不参与重载

*/
int main()
{
  
    auto result  = my_add(1, 2);
    cout << "inline-fun:1 + 2 = "  << result << endl;

    auto result2 = MY_ADD(1, 2);
    cout << "define-fun:1 + 2 = " << result2 << endl;

    auto result3 = my_add(1.1, 2.2);
    cout << "inline-fun:1.1+ 2.2=" << result3 << endl;

    auto aResult4 = MY_ADD(1.1, 2.2);
    cout << "define-fun:1.1+ 2.2=" << aResult4 << endl;



    return 0;
}
