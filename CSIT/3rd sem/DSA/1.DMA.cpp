#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int *ptr1, *ptr2;
	int n, n1;
	cout<<"Enter the size of memory to be allocated : ";
	cin>>n;
	cout<<"Garbage values"<<endl;
	cout<<"For malloc"<<endl;
	ptr1 = (int*) malloc (n*sizeof(int*));
	for(int i=0;i<n;i++){
		cout<<ptr1[i]<<endl;
	}
	cout<<"----------------------------------------"<<endl;
	cout<<"For calloc"<<endl;
	ptr2 = (int*) calloc (n,sizeof(int*));
	for(int i=0;i<n;i++){
		cout<<ptr2[i]<<endl;
	}
	cout<<"----------------------------------------"<<endl;
	cout<<"Input value"<<endl;
	cout<<"For calloc"<<endl;
	for(int i=0;i<n;i++){
		cout<<i<<" = ";
		cin>>ptr2[i];
	}
	cout<<"----------------------------------------"<<endl;
	cout<<"For Realloc"<<endl;
	cout<<"Enter the additional size of n: ";
	cin>>n1;
	ptr2=(int*)realloc(ptr2,n1*sizeof(int*));
	cout<<"Enter the values in reallocated memory slot: ";
	for(int i=n;i<=n1;i++){
		cout<<i<<" = ";
		cin>>ptr2[i];
	}
	cout<<"For calloc"<<endl;
	for(int i=0;i<=n1;i++){
		cout<<ptr2[i]<<endl;
	}
	free(ptr1);
	free(ptr2);
	return 0;
}

