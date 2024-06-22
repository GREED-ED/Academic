#include <iostream>
using namespace std;
const int maxSIZE = 3;
int queue[maxSIZE], front = -1, rear = -1;
void enqueue() // Function to enqueue an element into the circular queue
{
    if ((front == 0 && rear == maxSIZE - 1) || (front == rear + 1))
        cout << "Queue is Full."<<endl;
    else
	{
        if (front == -1)
		{
            front = 0;
            rear = 0;
        } 
		else if (rear == maxSIZE - 1)
            rear = 0;
        else 
            rear++;
        cout << "Enter value to enqueue: ";
        cin >> queue[rear];
    }
}
void dequeue() // Function to dequeue an element from the circular queue
{
    if (front == -1)
        cout << "Queue is empty."<<endl;
    else
	{
        cout << queue[front] << " is dequeued."<<endl;
        if (front == rear)
		{
            front = -1;
            rear = -1;
        } 
		else if (front == maxSIZE - 1)
            front = 0;
        else 
            front++;
    }
}
void display() // Function to display the elements of the circular queue
{
    int i;
    cout << "Queue:  ";
    if (front <= rear)
	{
        for (i = front; i <= rear; i++)
		{
            cout << queue[i] << "  ";
        }
    } 
	else 
	{
        for (i = front; i < maxSIZE; i++) 
		{
            cout << queue[i] << "  ";
        }
        for (i = 0; i <= rear; i++) 
		{
            cout << queue[i] << "  ";
        }
    }
    cout <<endl;
}
int main()
{
    int num;
    cout << "\t\t****CIRCULAR QUEUE OPERATIONS*****"<<endl<<endl;
    while (1) // Menu-based program for circular queue operations
	{
        cout << "\t1.ENQUEUE\t2.DEQUEUE\t3.DISPLAY\t4.EXIT"<<endl;
        cout << "Select an operations: ";
        cin >> num;
        switch (num) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid Selection!"<<endl;
        }
    }
    return 0;
}
