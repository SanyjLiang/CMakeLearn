#include <iostream>
#include "head.h"
using namespace std;

int main(int argc,const char*argv[])
{
    int a=6,b=3;
    printf("a = %d, b= %d\n",a,b);
    printf("a + b = %d\n",add(a,b));
    printf("a - b = %d\n",sub(a,b));
    printf("a * b = %d\n",muli(a,b));
    printf("a / b = %d\n",dive(a,b));
    return 0;
}