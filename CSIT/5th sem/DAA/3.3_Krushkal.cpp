#include <iostream>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, weight;
};

class DisjointSet {
public:
    int parent[100], rank[100];
    
    DisjointSet(int n) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }
    
    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]); 
        return parent[x];
    }
    
    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else if (rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

bool cmp(Edge a, Edge b) {
    return a.weight < b.weight;
}

int main() {
    int n = 4, m = 5;
    Edge edges[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    DisjointSet ds(n);
    sort(edges, edges + m, cmp);

    int mstWeight = 0;
    cout << "Edges in the Minimum Spanning Tree (MST):\n";

    for (int i = 0; i < m; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        
        if (ds.find(u) != ds.find(v)) {
            ds.unionSets(u, v);
            cout << u << " - " << v << " : " << edges[i].weight << endl;
            mstWeight += edges[i].weight;
        }
    }

    cout << "Total weight of MST: " << mstWeight << endl;
    return 0;
}

