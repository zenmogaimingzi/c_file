
#ifndef MYMATH

#define MYMATH

/*
内联函数定义到头文件中 
使用inline才能定义否则定义不了
不使用inline回提示重复定义
*/
int  my_inline_add(int n1, int n2);

inline int  my_inline_add(int n1, int n2) {
    return n1 + n2;
};

#endif // !MYMATH

