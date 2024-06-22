//to ceiling and floor value of a given input float number
#include<iostream>
using namespace std;
int ceil(float a)  // Function to calculate the ceiling value 
{
    int temp = (int)a;
    return temp+1;
}
int floor(float a)    // Function to calculate the floor value
{
    int temp = (int)a;
    return temp;
}
int main()
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t   ceiling and floor value"<<endl;
    cout<<"\t\t************************************"<<endl;
    float num;
    cout<<"Enter the floating point number: "<<endl; //taking input
    cin>>num;
    cout<<"The ceiling function of "<<num<<" is "<<ceil(num)<<endl;  //calling the function
    cout<<"The floor function of "<<num<<" is "<<floor(num)<<endl;
    return 0;
}