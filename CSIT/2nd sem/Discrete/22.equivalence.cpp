#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
// Function to check reflexivity of the relation
bool Reflexive(char relation[][2], int setSize, int relationSize)
{
    for (int i = 0; i < setSize; ++i)
    {
        bool found = false;
        for (int j = 0; j < relationSize; ++j) // Check if there is a pair (i, i) in the relation
        {
            if (relation[j][0] == i + 'a' && relation[j][1] == i + 'a')
            {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
    }
    return true;// All elements have a (a, a) pair, so it's reflexive
}
// Function to check symmetry of the relation
bool symmetry(char relation[][2], int relationSize)
{
    for (int i = 0; i < relationSize; ++i)
    {
        char a = relation[i][0];
        char b = relation[i][1];
        bool found = false;
        for (int j = 0; j < relationSize; ++j) // Check if (b, a) exists whenever (a, b) exists
        {
            if (relation[j][0] == b && relation[j][1] == a)
            {
                found = true;
                break;
            }
        }
        if (!found) // If (b, a) doesn't exist, relation is not symmetric
            return false;
    }
    return true;// All pairs have corresponding pairs in reverse order, so it's symmetric
}
// Function to check transitivity of the relation
bool Transitive(char relation[][2], int relationSize)
{
    for (int i = 0; i < relationSize; ++i)
    {
        char a = relation[i][0];
        char b = relation[i][1];
        for (int j = 0; j < relationSize; ++j)// Check if (a, b) and (b, c) implies (a, c) for all c
        {
            if (relation[j][0] == b)
            {
                char c = relation[j][1];
                bool found = false;
                for (int k = 0; k < relationSize; ++k)// Check if (a, c) exists
                {
                    if (relation[k][0] == a && relation[k][1] == c)
                    {
                        found = true;
                        break;
                    }
                }
                if (!found)// If (a, c) doesn't exist, relation is not transitive
                    return false;
            }
        }
    }
    return true;// All pairs satisfy transitivity condition, so it's transitive
}

int main()
{
    cout << "\t****************************" << endl;
    cout << "\t    Equivalence relation" << endl;
    cout << "\t****************************\n" << endl;
    int setSize, relationSize;
    cout << "Enter the size of the set: ";
    cin >> setSize;
    cout << "Enter the number of relations: ";
    cin >> relationSize;
    char relation[MAX_SIZE][2];
    cout << "Enter relations (format: a b):" << endl;
    for (int i = 0; i < relationSize; i++)
    {
        cin >> relation[i][0] >> relation[i][1];
    }
    if (Reflexive(relation, setSize, relationSize) && symmetry(relation, relationSize) && Transitive(relation, relationSize))
        cout << "The input relation is an equivalence relation." << endl;
    else 
        cout << "The input relation is not an equivalence relation." << endl;
    return 0;
}
