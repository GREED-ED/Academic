//piggie bank amoount 
#include<iostream>
using namespace std;
class addamount{
    private:
        int a;
        int balance=50;
    public: 
        addamount(){ 
            cout << "No amount is added to the Piggy Bank." << endl<<endl;
        }
        addamount(int a){ 
        balance += a; 
        cout << "$" << a << " is added to the Piggy Bank." << endl<<endl;
        }
    int total(){
    return balance;
    } 
};
int main(){
    int a;
    cout << "Enter the amount for saving: ";
    cin >> a;
    if (a>0){
        addamount s2(a);
        cout << "Total amount in Piggy Bank: $" << s2.total();
    }
    else {
        addamount s2;
        cout << "Total amount in Piggy Bank: $" << s2.total();
    }
    
    return 0;
}
