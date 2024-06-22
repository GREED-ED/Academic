//to check whether the given number is prime or not
#include<iostream>
using namespace std;
int prime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0){
            count++;
        }
    }
    if (count==2)
    {
        cout<<"The given number is Prime";
    }
    else{
        cout<<"The given number is not Prime";
    }
    return 0;
}
int main(){
    int a;
    cout<<"Enter any positive integer: ";
    cin>>a;
    prime(a);
    return 0;
}