//write the menu based program to implement the basic operations of satck
#include<iostream>
using namespace std;
int n, top = -1, num, stack[100];
void push(int a) {
    if (top >= n - 1) {
        cout << "Stack overflow" << endl;
    }
    else {
        top++;
        stack[top] = a;
    }
}
void pop() {
    if (top <= -1) {
        cout << "Stack underflow" << endl;
    }
    else {
        cout << "The top value is: " << stack[top] << endl;
        top--;
    }
}
void display() {
    if (top > 0) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
    else {
        cout << "Stack is empty." << endl;
    }
}
int main() {
    cout << "Enter the size of stack: ";
    cin >> n;
    while (1) {
        cout << "Choose the function to operate (1_Push, 2_Pop, 3_Display, 4_Exit): ";
        cin >> num;
        switch (num) {
            case 1:
                cout << "Enter the value to be inserted: ";
                for(int i=0;i<n;i++){
                cin >> num;
                push(num);
            }
                break;
            case 2:
            	for(int i=0;i<n;i++){
                pop();
            }
                break;
            case 3: 
                display();
                break;
            case 4:
                cout << "The program is exited." << endl;
                return 0;
            default:
                cout << "Invalid selection! Please try again." << endl;
        }
    }
    return 0;
}

