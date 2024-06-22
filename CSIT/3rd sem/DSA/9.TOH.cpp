//to display moves in TOH nfor user input number of disk
#include<iostream>
#include<math.h>
using namespace std;
int count;
int TOH(int n, char A, char B, char C) // Function to solve Tower of Hanoi for 'n' disks
{
	count++;
	if(n==1)
		cout<<"Move "<<A<<" to "<<C<<endl;
	else
	{
		TOH(n-1,A,C,B);
		cout<<"Move "<<A<<" to "<<C<<endl;
		TOH(n-1,B,A,C);
	}
}
int main()
{
	cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\t Tower of Hanoi problem"<<endl;
    cout<<"\t\t************************************"<<endl;
	int n;
	char A,B,C;
	cout<<"Enter the number of disks: ";
	cin>>n;
	cout<<"Total moves needed= "<<(pow(2,n)-1)<<endl;
	TOH(n,'A','B','C');
	cout<<"Total moves used: "<<count<<endl;
	return 0;
}
