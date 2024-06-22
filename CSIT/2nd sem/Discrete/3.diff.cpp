#include <iostream>
using namespace std;
int SetDifference(int set1[], int set2[], int n, int m, int set3[]) 
{
    int k = 0, i, j;
    for (i = 0; i < n; i++) 
    {   
        int Diff = 1; 
        for (j = 0; j < m; j++) 
        {   //Check if the current element in set1 is also in set2.
            if (set1[i] == set2[j]) 
            {
                Diff = 0;           // The elements match, so they are not different.
                break; 
            } 
        }
        if (Diff)         // If the element is different, add it to the difference set.
            set3[k++] = set1[i]; 
    }
    return k - 1; 
}

int main() 
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t   Set differnece of two sets"<<endl;
    cout<<"\t\t************************************"<<endl;
    const int MAX = 40;
    int set1[MAX], set2[MAX], set3[MAX];
    int n, m;    // Length of set1 is n, Length of set2 is m
    cout << "Enter no of elements in first set: ";  //loop to transfer set1 to set3
    cin >> n;
    cout << "Enter no of elements in second set: ";
    cin >> m;
    cout << "Enter elements of first set:" << endl;
    for (int i = 0; i < n; i++)          //taking user input
        cin >> set1[i];
    cout << "Enter elements of second set:" << endl;
    for (int i = 0; i < m; i++)
        cin >> set2[i];

    int U = SetDifference(set1, set2, n, m, set3);      //calling function "SetDifference"
    cout << "\nDifference of two sets : ";
    for (int i = 0; i <= U; i++)
        cout << set3[i] << " ";
    return 0;
}
