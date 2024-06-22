#include <iostream>
using namespace std;
void swap(int* a, int* b);
void BubbleSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
	{
        cout << "\nPass " << i + 1 << ":\n";
        for (j = 0; j < n - 1 - i; j++)
		{
            if (A[j] > A[j + 1])
			{
                swap(&A[j], &A[j + 1]);
            }
            for (k = 0; k < n; k++)
			{
                cout << A[k] << " ";    
            }
            cout << endl;
        }
    }
}
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;  
}
int main()
{
    cout << "\t\t\t------Bubble Sort------\n\n";
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++)
	{
        cin >> A[i];
    }
    BubbleSort(A, n);
    cout << "\n\nFinal Sorted Array: \n";
    for (i = 0; i < n; i++)
	{
        cout << A[i] << " ";    
    }
    return 0;
}
