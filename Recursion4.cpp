//Print 1 to 10 using recursion, use a return int function without taking an argument
#include<iostream>
using namespace std;

int Print()
{
    static int i=1;
    if(i>10)
    {
        return 0;
    }
    else
    {
        cout<<i<<endl;
        i++;
        return Print();
    }
}



int main()
{
    int i=Print();
    return 0;
}