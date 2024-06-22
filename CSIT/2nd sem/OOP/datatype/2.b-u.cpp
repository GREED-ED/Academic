//basic to userdefn datatypes
#include<iostream>
using namespace std;
class user_dfn{
    private:
        float length;
    public:
    user_dfn(){}
        user_dfn(float l){
            length=(l/2.54);
        }
        void show(){
            cout<<"The length in inch is: "<<length<<endl;
        }
};
int main(){
    user_dfn u;
    float l;
    cout<<"Enter the length in cm:"<<endl;
    cin>>l;
    u=l;
    u.show();
    return 0;
}