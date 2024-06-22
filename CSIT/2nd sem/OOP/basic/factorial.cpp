//to find factorial of given number
#include<iostream>
using namespace std;
int facto(int a)
{
    if (a==0 || a==1)
    {
        return 1; 
    }
    else {
           return (a * facto(a-1));
        }
}
int main(){
    int a;
    label:
    cout<<"Enter the value: ";
    cin>>a;
    if(a<0){
        cout<<"Enter positive number"<<endl;
        goto label;
    }else{
        cout<<"The factorial of "<<a<<" is: "<<facto(a);
    }
    return 0;

}
