// 8. Write a C++ program to swap values of two int variables without using third variable
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the numbers";
    cin>>a>>b;
    cout<<"Before swapping\n";
    cout<<"a="<<a<<",b="<<b<<endl;
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<"After swapping\n";
    cout<<"a="<<a<<",b="<<b;
    
    return 0;
}