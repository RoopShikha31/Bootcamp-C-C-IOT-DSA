// 10. Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>

using namespace std;

int main()
{
    int i,sum=0;
    cout<<"The first 10 number is"<<endl;
    
    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        cout<<" "<<i<<endl;
    }
    cout<<"Sum is "<<sum;
    
    
    return 0;
}