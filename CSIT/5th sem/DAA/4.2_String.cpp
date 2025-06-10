#include <iostream>
#include <algorithm>
using namespace std;

int minEditDistance(const string &s1, const string &s2) {
    int m = s1.length();
    int n = s2.length();
    
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
        dp[i][0] = i;
    
    for (int j = 0; j <= n; j++)
        dp[0][j] = j;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
            }
        }
    }
    
    return dp[m][n];
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    int distance = minEditDistance(str1, str2);
    cout << "Minimum Edit Distance = " << distance << endl;

    return 0;
}
