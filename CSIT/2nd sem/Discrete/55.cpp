//to check if the input relation is Equivalence relation or not.
#include <iostream>
using namespace std;
const int MAX_SIZE = 100; // Maximum size of the set
// Function to check if a relation is an equivalence relation
bool Equivalance(int relation[][2], int setSize, int relationSize)
{
    bool Reflexive[MAX_SIZE] = {false};
    bool Transitive[MAX_SIZE][MAX_SIZE] = {false};
    // Check reflexivity and transitivity
    for (int i = 0; i < relationSize; i++)
    {
        int a = relation[i][0];
        int b = relation[i][1];
        // Check reflexivity
        if (a == b) 
            Reflexive[a] = true;

        // Check transitivity
        for (int c = 0; c < setSize; c++)
        {
            if (Transitive[a][b] && !Transitive[a][c])
                return false;
            if (Transitive[b][c])
                Transitive[a][c] = true;
        }
    }
    // Check if all elements are reflexive
    for (int i = 0; i < setSize; i++)
    {
        if (!Reflexive[i])
            return false;
    }
    return true;
}

int main()
{
    cout << "\t****************************" << endl;
    cout << "\t\tEquivalence relation" << endl;
    cout << "\t****************************\n" << endl;
    int setSize, relationSize;
    cout << "Enter the size of the set: ";
    cin >> setSize;
    cout << "Enter the number of relations: ";
    cin >> relationSize;
    int relation[MAX_SIZE][2];
    cout << "Enter relations (format: a b):" << endl;
    for (int i = 0; i < relationSize; i++)
    {
        cin >> relation[i][0] >> relation[i][1];
    }
    // Check if the relation is an equivalence relation
    if (Equivalance(relation, setSize, relationSize))
        cout << "The relation is an equivalence relation." << endl;
    else
        cout << "The relation is not an equivalence relation." << endl;
    return 0;
}
