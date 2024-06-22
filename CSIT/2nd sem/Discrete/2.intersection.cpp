//too find intersection of two user input sets
#include <iostream>
using namespace std;
int printIntersection(int set1[], int set2[], int n, int m, int set3[])
{
    int k = 0, i, j;
    for (i = 0; i < n; i++) // Nested loops to compare elements in set1 and set2.
    {          
        for (j = 0; j < m; j++) 
        {
            if (set1[i] == set2[j]) 
            {
                set3[k++] = set1[i];
                break;
            }
        }
    }
    return k - 1;
}

int main() 
{
	cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\tIntersection of two sets"<<endl;
    cout<<"\t\t************************************"<<endl;
    const int MAX = 40;
    int set1[MAX], set2[MAX], set3[MAX];
    int N, M;        // Length of set1 is N, Length of set2 is M
    cout << "No. of elements in SET1: ";     
    cin >> N;
    cout << "No. of elements in SET2: ";     
    cin >> M;
    cout << "Enter elements of SET1:" << endl;
    for (int i = 0; i < N; i++)       //taking user input
        cin >> set1[i];
    cout << "Enter elements of SET2:" << endl;
    for (int i = 0; i < M; i++)
        cin >> set2[i];

    int U = printIntersection(set1, set2, N, M, set3);   //calling function "printIntersection"
    cout << "\n Union of two sets : ";
    for (int i = 0; i <= U; i++) 
        cout << set3[i] << " ";
    return 0;
}
