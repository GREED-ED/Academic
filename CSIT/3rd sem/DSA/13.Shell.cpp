//shellsort
#include<iostream>
#include<math.h>
using namespace std;
void shell(int A[],int n)
{
	int pass=1;
	for(int gap=n/2; gap>0;gap/=2)
	{
		for(int i=gap;i<n;i++)
		{
			int temp=A[i],j;
			for(j=i;j>=gap && A[j-gap]>temp;j-=gap)
			{
				A[j]=A[j-gap];
			}
			A[j]=temp;
			cout<<endl<<"Pass:"<<pass<<"\tGap:"<<gap<<endl;
			for(int j=0;j<n;j++)
			{
				cout<<A[j]<<" ";
			}
	cout<<endl;
	pass++;
		}
	}
}
int main()
{
    cout << "\t\t\t------Shell Sort------\n\n";
	int n,i;
	cout<<"Enter the number of data: ";
	cin>>n;
	int A[n];
	cout<<"Enter the data: ";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"The datas are: "<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<A[j]<<"\t";
	}
	cout<<endl;
	shell(A,n);
	cout<<endl;
	cout<<"The datas after sorting are: "<<endl;
	for(int k=0;k<n;k++)
	{
		cout<<A[k]<<"\t";
	}
	cout<<endl;
	return 0;
}
