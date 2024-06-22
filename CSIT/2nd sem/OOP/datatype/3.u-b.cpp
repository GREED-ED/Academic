//userdefn datatypes to basic
#include<iostream>
using namespace std;
class user_dfn{
    private:
        float length;
    public:
    user_dfn(){}
        operator float(){
            float l;
            l=(length/2.54);
        return l;
        }
        void input(){
            
            cout<<"Enter the length in cm:"<<endl;
            cin>>length;
        }
};
int main(){
    user_dfn u;
    float w;
    u.input();
    w=u;
    cout<<"The length in inch is: "<<w<<endl;
    return 0;
}