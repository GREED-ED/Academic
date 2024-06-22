//to find given number is fibonacci or not
#include<iostream>
using namespace std;
int fibo(int a)
{
    if(a<2){
        return a;
    }
    else {
        return (fibo(a-1)+fibo(a-2));
        }
}

int main() 
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    if (a<=0){
        cout<<"Please, Enter positive number";
    }
    else{
        cout<<"the fibonacci series upto "<<a<<" is:"<<endl;
    for(int i=0;i<a;i++){
        cout<<fibo(i)<<"\t";
    }
    }
    return 0;
}
