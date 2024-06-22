//to implement the disadvantage of linear queue
#include<iostream>
#include<conio.h>
using namespace std;
int n, queue[100], num , front=-1, rear=-1, a;
void enqueue(int a){
	if(front==-1){
		front=0;
	}
	if(rear>=n-1){
		cout<<"Queue is full"<<endl;
	}
	else {
		rear++;
		queue[rear]=a;
	}
}
void dequeue(){
	if(rear==-1){
		cout<<"Queue is empty"<<endl;
	}
	else {
		cout<<"The dequeue element is "<<queue[front]<<endl;
		front++;
	}
}
void display() {
    if (rear >= 0) {
        cout << "Queue elements are: "<<endl;
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << "\t";
        }
    }
    else {
        cout << "queue is empty." << endl;
    }
}
int main(){
	cout<<"Enter the size of Queue:";
	cin>>n;
	while(1){
	cout<<"Select the operations (1=Enqueue, 2=Dequeue, 3=Display, 4=exit)"<<endl;
	cin>>num;
	switch(num){
			case 1:
                cout << "Enter the value to be Enqueue: ";
                cin >> a;
                enqueue(a);
                break;
            case 2:
                dequeue();
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