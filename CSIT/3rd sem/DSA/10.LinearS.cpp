#include<iostream>
using namespace std;
int main ()
{
    cout << "\t\t\t------Linear Search------\n\n";
    int n, A[100], key;
    cout<<"Enter the number of datas: ";
    cin>>n;
    cout<<"Enter the data: ";
    for(int i=0;i<n;i++)
	{
        cin>>A[i];
    }
    cout<<"Enter the number to search: "<<endl;
    cin>>key;
    int flag = 0, count =0;
    for(int i=0;i<n;i++)
	{
        if (A[i]==key)
		{
            flag =1;
            break;
        }
        count++;
    }
    if(flag == 1 )
	{
        cout<<"Search is found."<<endl;
        cout<<"The index is in size "<<count;
    }
    else
	{
        cout<<"Not found!!";
    }
    return 0;
}
