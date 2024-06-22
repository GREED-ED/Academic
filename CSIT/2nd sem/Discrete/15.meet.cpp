//to find the meet of two Boolean matrices.
#include <iostream>
using namespace std;

void meet(bool mat1[100][100], bool mat2[100][100], int rows, int cols) // Function to perform the meet operation
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mat1[i][j] = mat1[i][j] && mat2[i][j];
        }
    }
}

void show(bool matrix[100][100], int rows, int cols) // Function to display a matrix
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout<<"\t\t************************************"<<endl;
    cout<<"\t\t\tBoolean meet"<<endl;
    cout<<"\t\t************************************"<<endl;
    int rows, cols;
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;
    bool mat1[100][100];
    bool mat2[100][100];
    cout << "Enter elements of the first matrix (0 for false, 1 for true):" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of the second matrix (0 for false, 1 for true):" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat2[i][j];
        }
    }
    meet(mat1, mat2, rows, cols);
    cout << "Meet of the two matrices:" << endl;
    show(mat1, rows, cols);
    return 0;
}
