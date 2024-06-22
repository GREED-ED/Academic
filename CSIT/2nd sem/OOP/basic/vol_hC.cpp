//to find volume where height is constant
#include<iostream>
using namespace std;
int vol(int l, int b, int h=10)
{
    return (l*b*h);
}
int main(){
    int l, b, h, volume;
    cout<<"Enter Length, Breadth and height: ";
    cin>>l>>b;
    cout<<"The volume is "<<vol(l,b);
    return 0;
}
