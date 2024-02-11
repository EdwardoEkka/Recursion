//Print 1 to 10 using recursion, use a return int function taking an argument
#include<iostream>
using namespace std;

int Print(int i)
{
    if(i>10)
    {
        return 0;
    }
    else
    {
        cout<<i<<endl;
        return Print(i+1);
    }
}

int main()
{
    int i=Print(1);
    return 0;
}