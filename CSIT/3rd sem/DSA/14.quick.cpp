#include <iostream>
using namespace std;
int pass = 1, n;
void QuickSort(int arr[], int l, int h);
void swap(int* a, int* b);
int partition(int arr[], int l, int h);

void QuickSort(int arr[], int l, int h)
{
    if (l < h)
	{
        int p = partition(arr, l, h);
        cout << "\nPass " << pass++ << ": ";
        for (int i = 0; i < n; i++)
		{
            cout << arr[i] << " ";
        }
        cout << endl;
        QuickSort(arr, l, p - 1);
        QuickSort(arr, p + 1, h);
    }
}
int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = (l - 1);
    for (int j = l; j <= h - 1; j++)
	{
        if (arr[j] < pivot)
		{
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    cout << "\t\t\t------Quick Sort------\n\n";
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    QuickSort(arr, 0, n - 1);
    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
	{
        cout << arr[i] << " ";
    }
    return 0;
}






