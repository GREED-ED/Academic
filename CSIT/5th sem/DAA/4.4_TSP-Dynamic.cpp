#include <iostream>
#include <climits>
using namespace std;

const int N = 16;
const int INF = 1e9;

int n; 
int dist[N][N];
int dp[N][1 << N];

int tsp(int pos, int mask) {
    if (mask == (1 << n) - 1) {
        return dist[pos][0];
    }

    if (dp[pos][mask] != -1) return dp[pos][mask];
    int ans = INF;

    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) { 
            int newAns = dist[pos][city] + tsp(city, mask | (1 << city));
            if (newAns < ans)
                ans = newAns;
        }
    }
    dp[pos][mask] = ans;
    return ans;
}

int main() {
    cout << "Enter number of cities: ";
    cin >> n;
    if (n > N) {
        cout << "Too many cities! Max allowed: " << N << endl;
        return 1;
    }

    cout << "Enter distance matrix (" << n << " x " << n << "):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> dist[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < (1 << n); j++)
            dp[i][j] = -1;

    int result = tsp(0, 1);
    cout << "Minimum cost of TSP = " << result << endl;

    return 0;
}

