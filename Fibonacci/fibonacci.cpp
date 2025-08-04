#include<iostream>

void fib(int iNo1 = 0, int iNo2 = 1)
{
    int a = iNo1;
    int b = iNo2;

    static int iCnt = 0;

    if(iCnt <= 42)
    {
        std::cout<<a<<"\n";
        b = a+b;
        a = b-a;
        iCnt++;
        fib(a,b);   
    }
}


int main()
{

    fib();

    return 0;
}
