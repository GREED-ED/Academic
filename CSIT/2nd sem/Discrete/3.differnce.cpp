 //too find difference of two user input sets
#include <iostream>
using namespace std;

bool isMember(int element, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}
void difference(int set1[], int set2[], int n, int m, int set3[]){
    n=set1[0];
    set3[0]=0;
    for(int i=1;i<=n;i++){
        if(!isMember(set1[i], set2, m))
        set3[++set3[0]]=set1[i];
        }
}
// void SetDifference(int set1[], int set2[], int n, int m, int set3[]) {
//     int count = 0;

//     for (int i = 0; i < n; i++) {
//         if (!isMember(set1[i], set2, m)) {
//             set3[count++] = set1[i];
//         }
//     }

//     set3[0] = count;
// }

int main() {
    const int MAX = 40;
    int set1[MAX], set2[MAX], set3[MAX];
    int N, M;        // Length of set1 is N, Length of set2 is M

    cout << "No. of elements in SET1: ";
    cin >> N;

    cout << "No. of elements in SET2: ";
    cin >> M;

    cout << "Enter elements of SET1:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> set1[i];
    }

    cout << "Enter elements of SET2:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> set2[i];
    }

    difference(set1, set2, N, M, set3);

    cout << "\n difference of two sets : ";
    for (int i = 0; i <= set3[0]; i++) {
        cout << set3[i] << " ";
    }

    return 0;
}
