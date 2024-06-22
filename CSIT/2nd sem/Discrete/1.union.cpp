#include <iostream>
using namespace std;
int printUnion(int set1[], int set2[], int n, int m, int set3[]) 
{
    int k = 0, i, j, flag = 0;
    for (i = 0; i < n; i++)
        set3[k++] = set1[i];

    for (i = 0; i < m; i++) 
    {
        flag = 1;
        for (j = 0; j < n; j++) 
        {
            if (set2[i] == set1[j]) 
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1) 
            set3[k++] = set2[i];
    }
    return k - 1;
}

int main() 
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\tUnion of two sets"<<endl;
    cout<<"\t\t************************************"<<endl;
    const int MAX = 40;
    int set1[MAX], set2[MAX], set3[MAX];
    int N, M; // Length of set1 is N, Length of set2 is M

    cout << "No. of elements in SET1: ";  
    cin >> N;
    cout << "No. of elements in SET2: "; 
    cin >> M;
    cout << "Enter elements of SET1:" << endl;
    for (int i = 0; i < N; i++)
        cin >> set1[i];
    cout << "Enter elements of SET2:" << endl;
    for (int i = 0; i < M; i++)
        cin >> set2[i];

    int U = printUnion(set1, set2, N, M, set3);
    cout << "\n Union of two sets : ";
    for (int i = 0; i <= U; i++)
        cout << set3[i] << " ";
    return 0;
}
