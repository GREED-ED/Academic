#include <iostream>
#include <iomanip>
using namespace std;

bool check(const int frames[], int nFrame, int page)
{
    for (int i = 0; i < nFrame; ++i)
    {
        if (frames[i] == page)
            return true;
    }
    return false;
}
void display(const int frames[], int nFrame, const string& status)
{
    for (int i = 0; i < nFrame; ++i)
    {
        if (frames[i] != -1)
            cout << setw(5) << frames[i];
		else 
            cout << setw(5) << "-";
    }
    cout << setw(5) <<"\t"<< status;
    cout << endl;
}
int Replace(const int ref[], int nPage, int nFrame)
{
    int frames[nFrame];
    int front = 0;
    int rear = 0;
    int Miss = 0;
    for (int i = 0; i < nFrame; ++i)
    {
        frames[i] = -1;
    }
    cout << setw(15) << "Reference";
    for (int i = 0; i < nFrame; ++i)
    {
        cout << setw(5) << "F" << (i + 1);
    }
    cout << setw(10) << "Status" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < nPage; ++i)
    {
        int currentPage = ref[i];
        string status;
        if (!check(frames, nFrame, currentPage))
        {
            Miss++;
            status = "Page fault";
            frames[rear] = currentPage;
            rear = (rear + 1) % nFrame;
            if (rear == front)
                front = (front + 1) % nFrame;
        } 
        else
            status = "No fault";
        cout << setw(15) << currentPage;
        display(frames, nFrame, status);
    }
    return Miss;
}
int main()
{
    int nFrame, nPage;
	cout<<"*************** FIFO Page Replacement Algorithm ******************"<<endl<<endl;
    cout << "Enter the number of page frames: ";
    cin >> nFrame;
    cout << "Enter the number of pages in the reference string: ";
    cin >> nPage;
    int* ref = new int[nPage];
    cout << "Enter the reference string: ";
    for (int i = 0; i < nPage; ++i)
    {
        cin >> ref[i];
    }
    int Miss = Replace(ref, nPage, nFrame);
    cout << endl<<"Number of page faults: " << Miss << endl;
    delete[] ref;
    cout << endl<<"Compiled By: Prashan Shrestha." << endl;
    return 0;
}
