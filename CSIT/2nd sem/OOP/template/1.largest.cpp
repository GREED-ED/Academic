//to find the largest number using function template
#include<iostream>
using namespace std;
template <class T>
T big(T a,T b){
    if (a>b){
        return a;
    }
    else return b;
}
int main(){
    cout<<big <int> (5,8)<<endl;
    cout<<big <char> ('a','g');
    return 0;
}