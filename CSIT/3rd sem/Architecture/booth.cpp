#include <iostream>
using namespace std;

void addition(int ac[], int x[], int qrn) {
    int i, c = 0;
    for (i = 0; i < qrn; i++) {
        ac[i] = ac[i] + x[i] + c;
        if (ac[i] > 1) {
            ac[i] = ac[i] % 2;
            c = 1;
        } else
            c = 0;
    }
}

void complement(int a[], int n) {
    int i;
    int x[8] = {0};
    x[0] = 1;
    for (i = 0; i < n; i++) {
        a[i] = (a[i] + 1) % 2;
    }
    addition(a, x, n);
}

void right_Shift(int ac[], int qr[], int& qn, int qrn) {
    int temp, i;
    temp = ac[0];
    qn = qr[0];
    cout << "\t\tright_Shift\t";
    for (i = 0; i < qrn - 1; i++) {
        ac[i] = ac[i + 1];
        qr[i] = qr[i + 1];
    }
    qr[qrn - 1] = temp;
}

void show(int ac[], int qr[], int qrn) {
    int i;
    for (i = qrn - 1; i >= 0; i--)
        cout << ac[i];
    cout << "\t";
    for (i = qrn - 1; i >= 0; i--)
        cout << qr[i];
}

void booth(int br[], int qr[], int mt[], int qrn, int sc) {
    int qn = 0, ac[10] = { 0 };
    int temp = 0;
    cout << "qn\tq[n+1]\t\tBR\t\tAC\tQR\t\tsc\n";
    cout << "\t\t\tinitial\t\t";
    show(ac, qr, qrn);
    cout << "\t\t" << sc << "\n";
    while (sc != 0) {
        cout << qr[0] << "\t" << qn;
        if ((qn + qr[0]) == 1) {
            if (temp == 0) {
                addition(ac, mt, qrn);
                cout << "\t\tA = A - BR\t";
                for (int i = qrn - 1; i >= 0; i--)
                    cout << ac[i];
                temp = 1;
            } else if (temp == 1) {
                addition(ac, br, qrn);
                cout << "\t\tA = A + BR\t";
                for (int i = qrn - 1; i >= 0; i--)
                    cout << ac[i];
                temp = 0;
            }
            cout << "\n\t";
            right_Shift(ac, qr, qn, qrn);
        } else if (qn - qr[0] == 0)
            right_Shift(ac, qr, qn, qrn);
        show(ac, qr, qrn);
        cout << "\t";
        sc--;
        cout << "\t" << sc << "\n";
    }
}

int main() {
    int sc;
    int brn, qrn;

    cout << "Enter the number of bits for multiplicand: ";
    cin >> brn;
    int br[brn];
    cout << "Enter the multiplicand bit by bit: ";
    for (int i = brn - 1; i >= 0; i--)
        cin >> br[i];
    int mt[brn];
    for (int i = brn - 1; i >= 0; i--)
        mt[i] = br[i];
    complement(mt, brn);
    cout << "Enter the number of bits for multiplier: ";
    cin >> qrn;
    int qr[qrn];
    cout << "Enter the multiplier bit by bit: ";
    for (int i = qrn - 1; i >= 0; i--)
        cin >> qr[i];
    cout << "Enter the sequence counter: ";
    cin >> sc;
    booth(br, qr, mt, qrn, sc);
    cout << endl << "Result = ";
    for (int i = qrn-1 ; i >= 0; i--)
        cout << qr[i];
    return 0;
}

