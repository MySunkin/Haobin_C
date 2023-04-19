#include <iostream>

//解一元二次方程


int  main() {
    //把三个系数保存到计算机中
    // "=" 表示赋值，“==”表示相等
    int a = 1;
    int b = 2;
    int c = 3;

    float delta;//delta存放的是b*b-4*a*c
    float x1; //存放一元二次方程的其中一个解
    float x2; //存放一元二次方程的其中一个解

    delta = b * b -4 *a *c;

    if(delta >0)
    {
        //两个解
    }
    else if(delta ==0){
        //唯一解
    }
    else
    {
        //无解
    }

    return 0;
}
