//to perform binary search by using recursive function.
#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;            // Element not found
    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;              // Element found
    else if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key); // Search in the left subarray
    else
        return binarySearch(arr, mid + 1, high, key); // Search in the right subarray
}

int main()
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\tBinary search"<<endl;
    cout<<"\t\t************************************"<<endl;
    int arr[] = {21, 32, 45, 54, 63, 73, 80, 91, 94, 100};
    int key;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the key to be searched: ";
    cin >> key;
    int index = binarySearch(arr, 0, arrSize - 1, key);
    if (index == -1)
        cout << "Data not found in the array." <<endl;
    else
        cout << "Data found at index " << index << "." <<endl;
    return 0;
}
