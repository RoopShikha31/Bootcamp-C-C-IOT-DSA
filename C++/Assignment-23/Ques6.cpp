// 6. Write a C++ program to calculate an average of 3 numbers.
#include <iostream>

using namespace std;

int main()
{
    float Avg,a,b,c;
    cout<<"Enter the numbers";
    cin>>a>>b>>c;
    Avg=(a+b+c)/3;
    cout<<endl;
    cout<<"Average of a number is "<<Avg;
    return 0;
}