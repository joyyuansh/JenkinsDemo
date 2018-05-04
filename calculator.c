#include "stdio.h"
#include "calculator.h"

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    int i = 0 ;
    int result = 0 ;
    for( i = 0 ; i < a ; i++)
    {
        result += b ;
    }
    return result ;
}

int divd(int a, int b)
{
    if(b!=0)
        return a/b ;
}

float dividf(float a, float b)
{
    if(b!=0)
        return a/b;	
}

point add_point(point a, point b){
    point val;
    val.x = a.x + b.x;
    val.y = a.y + b.y;
    return val;
}
