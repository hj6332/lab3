#include <iostream>
#include <cstring>
#include "math_func.h"

int func(int a)
{
    int result=1;
    for(int i=a;i>0;i--)
        result=result*i;
    return result;
}

int func(int a, int b, char* op)
{
    if(!strcmp(op,"add"))
        return a+b;
    if(!strcmp(op,"sub"))
        return a-b;
    if(!strcmp(op,"mul"))
        return a*b;
    if(!strcmp(op,"div"));
    {
        if(b==0)
            return 0;
        else
            return a/b;
    }
}

void func(int a, int b, char * op, float &c)
{
    if(!strcmp(op,"add"))
        c=c+a+b;
    if(!strcmp(op,"sub"))
        c=c+a-b;
    if(!strcmp(op, "mul"))
        c=c+a*b;
    if(!strcmp(op,"div"))
    {
        if(b!=0)
            c=c+(a/b);
    }
}





