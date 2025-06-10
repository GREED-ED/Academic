#include <iostream>
using namespace std;

const int MAX = 100;

int n, m; 
int edges[MAX][2];
bool visited[MAX]; 

int main() {
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    for (int i = 1; i <= n; i++) {
        visited[i] = false;
    }

    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        if (!visited[u] && !visited[v]) {
            visited[u] = true;
            visited[v] = true;
        }
    }

    cout << "Approximate Vertex Cover:\n";
    for (int i = 1; i <= n; i++) {
        if (visited[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

