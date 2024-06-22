#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[100], b[100], c;
    int i, m, n;
    cout << "Enter degree of dividend polynomial: ";
    cin >> n;
    cout << "Enter coefficients :\n";
    for (i = n; i >= 0; i--) {
        cin >> a[i];
    }
    cout << "Enter Constant term: \n";
    cin >> c;
	b[n]=0;
    m = n;
    while (m > 0) {
        b[m-1] = a[m] + b[m] * c;
        m--;
    }
    cout << "Quotient:\n";
    m=n-1;
    while(m>=0){
    	if(b[m]!=0){
    		cout << b[m] << "x^" << m ;
    		if (m > 0) {
            cout << "+ ";
        }
    		m--;
		}
	}
    cout << endl;
    return 0;
}

