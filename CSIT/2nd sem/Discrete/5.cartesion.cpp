//to find the Cartesian product of two given Sets 
#include <iostream>
using namespace std;
template <typename T1, typename T2>
void findCart(const T1 arr1[], int n, const T2 arr2[], int n1) // Function to find the Cartesian product 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << "{" << arr1[i] << ", " << arr2[j] << "}, ";
        }
    }
}
template <typename T>
void inputArray(T arr[], int n) //Function to input elements into an array
{
    cout << "Enter " << n << " elements:" <<endl;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
}

int main()
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\t   Cartesian product"<<endl;
    cout<<"\t\t************************************"<<endl;
    const int MAX = 100;
    int arr1[MAX], arr2[MAX];
    int n1, n2;
    cout << "Enter the number of elements in the first set: ";
    cin >> n1;
    inputArray(arr1, n1);              //calling input function
    cout << "Enter the number of elements in the second set: ";
    cin >> n2;
    inputArray(arr2, n2);
    findCart(arr1, n1, arr2, n2); //calling function to find Cartesian
    return 0;
}
