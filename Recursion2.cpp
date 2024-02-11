//Write a c++ code to print 1 to 10 using recursion with a void function with taking an argument
#include <iostream>
using namespace std;

void Print(int i)
{
    if(i<=10)
    {
        cout<<i<<endl;
        Print(i+1);
    }
}

int main() {
    Print(1);
    return 0;
}