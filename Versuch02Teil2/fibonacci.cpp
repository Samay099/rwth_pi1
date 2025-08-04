//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
// Versuch 02
//
// Datei:  main.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>

typedef unsigned long int ULONG;

ULONG fibonacci(int n)
{
    ULONG previousFib = 0;
    ULONG currentFib = 1;
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        ULONG newFib = previousFib + currentFib ;
        previousFib = currentFib;
        currentFib = newFib;
    }
    return previousFib;
}

int main ()
{
    std::cout << "Fibonacci - Zahlen von 0 bis 12:" << std::endl ;
    for (int i = 0; i <= 50; i ++)
    {
        std::cout << "f(" << i << ") = " << fibonacci(i) << std::endl ;
    }
    return 0;
}
