
// 5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>

using namespace std;

int main()
{
    float Vol,l,w,h;
    cout<<"Enter the length,width,height";
    cin>>l>>w>>h;
    Vol=l*w*h;
    cout<<endl;
    cout<<"Volume of cuboid is "<<Vol;
    return 0;
}