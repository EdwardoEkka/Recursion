//Write a c++ code to print 1 to 10 using recursion with a void function without taking an argument
#include <iostream>
using namespace std;

void Print()
{
    static int i=1;
    if(i<=10)
    {
        cout<<i<<endl;
        i++;
        Print();
    }
}


int main() {
    Print();
    return 0;
}