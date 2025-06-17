#include <iostream>
#include <cmath>
using namespace std;

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod; 
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp >> 1; 
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    long long p, g, a, b, A, B, sA, sB;
    
    cout << "Enter a large prime number (p): ";
    cin >> p;
    cout << "Enter a primitive root (g): ";
    cin >> g;
    
    cout << "Enter Party A's private key (a): ";
    cin >> a;
    
    cout << "Enter Party B's private key (b): ";
    cin >> b;
    
    A = modExp(g, a, p); 
    B = modExp(g, b, p); 
    
    cout << "\nParty A's public key: " << A << endl;
    cout << "Party B's public key: " << B << endl;
    
    sA = modExp(B, a, p);  
    sB = modExp(A, b, p);  
    
    cout << "\nParty A's computed shared secret: " << sA << endl;
    cout << "Party B's computed shared secret: " << sB << endl;
    
    if (sA == sB) {
        cout << "\nThe shared secret is successfully established: " << sA << endl;
    } else {
        cout << "\nError: Shared secrets don't match." << endl;
    }

    return 0;
}

