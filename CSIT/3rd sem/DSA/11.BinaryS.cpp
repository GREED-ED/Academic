#include<iostream>
using namespace std;
int main ()
{
    cout << "\t\t\t------Binary Search------\n\n";
    int n, A[100], key, high, low;
    cout<<"Enter the number of datas: ";
    cin>>n;
    cout<<"Enter the data: ";
    for(int i=0;i<n;i++)
	{
        cin>>A[i];
    }
    cout<<"Enter the number to search: "<<endl;
    cin>>key;
    high=n-1;
    low=0;
    while (low<=high){
        int mid=(high+low)/2;
        if(A[mid]==key)
		{
            cout<<"Search is found at index: "<<mid<<endl;
            return 0;
        }
        else if(A[mid]<key)
		{
            low=mid+1;
        }
        else 
		{
            high=mid-1;
        }
    }
        cout<<"Search is not found!!"<<endl;
}
