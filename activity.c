#include<stdio.h>
#include<stdlib.h>

int main()
{
    int p;
    int sum;
    int a=10;
    int b=30;
    int *x=NULL;
    x=&sum;
    sum=a+b;
    p=a-b;
    *x=sum;
    return 0;
}
