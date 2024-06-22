//to represent graph. 
#include <iostream>
#include <string>
using namespace std;
const int MAX_VERTICES = 100;
class Graph
{
    private:
        int V; // Number of vertices
        int adjMatrix[MAX_VERTICES][MAX_VERTICES]; //represent edges
        string vertexNames[MAX_VERTICES]; // Names of vertices
    public:
        Graph(int vertices) : V(vertices)
        {
            for (int i = 0; i < V; ++i)
            {
                for (int j = 0; j < V; ++j)
                {
                    adjMatrix[i][j] = 0;
                }
            }
        }
    void addEdge(int source, int destination) // Function to add an edge between two vertices in the graph
    {
        adjMatrix[source][destination] = 1;
    }
    void setVertexName(int index, const string& name)  // Function to set the name of a vertex at a given index
    {
        vertexNames[index] = name;
    }
    void printGraph()
    {
        cout << "Vertices: ";
        for (int i = 0; i < V; ++i)
        {
            cout << vertexNames[i] << " ";
        }
        cout << endl;
        cout << "Adjacency matrix:" << endl;
        for (int i = 0; i < V; ++i)
        {
            cout << vertexNames[i] << ": ";
            for (int j = 0; j < V; ++j)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    cout << "\t****************************" << endl;
    cout << "\t\trepresent graph" << endl;
    cout << "\t****************************\n" << endl;
    int numVertices, numEdges;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;
    Graph graph(numVertices);
    cout << "Enter the vertex names:" << endl;
    for (int i = 0; i < numVertices; ++i)
    {
        string vertex;
        cin >> vertex;
        graph.setVertexName(i, vertex);
    }
    cout << "Enter the number of edges: ";
    cin >> numEdges;
    cout << "Enter the edges (format: source destination):" << endl;
    for (int i = 0; i < numEdges; ++i)
    {
        int source, destination;
        cin >> source >> destination;
        graph.addEdge(source, destination);
    }
    graph.printGraph();
    return 0;
}

