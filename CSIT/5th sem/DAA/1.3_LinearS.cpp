#include<iostream>
using namespace std;
int main ()
{
    int key;
    int A[]={5,10,25,8,4,16,9,44};
    int n = sizeof(A);
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
