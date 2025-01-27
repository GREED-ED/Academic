#include <iostream>
using namespace std;

struct Segment {
    int segNo;
    int base;
    int limit;
};

void displayS(Segment segments[], int n) {
    cout << "\nSegment Table:\n\n";
    cout << "Segment No\tBase\tLimit\n";
    cout << "-------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << segments[i].segNo << "\t\t" << segments[i].base << "\t" << segments[i].limit << endl;
    }
}

int calculatePA(Segment segments[], int n, int segNo, int LA) {
    for (int i = 0; i < n; i++) {
        if (segments[i].segNo == segNo) {
            if (LA < segments[i].limit) {
                return segments[i].base + LA;
            } else {
                cout << "Error: Logical address exceeds segment limit." << endl;
                return -1;
            }
        }
    }
    cout << "Error: Segment not found." << endl;
    return -1;
}

int main() {
    cout << "\t\t********* SEGMENTATION TABLE *********\n\n";
    int n, segNo, LA;

    cout << "Enter the number of segments: ";
    cin >> n;

    Segment segments[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter info of segment " << i << endl;
        cout << "Segment No: ";
        cin >> segments[i].segNo;
        cout << "Base: ";
        cin >> segments[i].base;
        cout << "Limit: ";
        cin >> segments[i].limit;
    }

    displayS(segments, n);

    cout << "\nEnter segment number and logical address:\n";
    cout << "Segment No: ";
    cin >> segNo;
    cout << "Logical Address: ";
    cin >> LA;

    int PA = calculatePA(segments, n, segNo, LA);

    if (PA != -1) {
        cout << "\nPhysical Address: " << PA << endl;
    }

    cout << "\nCompiled By: Prashan Shrestha." << endl;
    return 0;
}
