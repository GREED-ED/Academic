//to find the product of two Boolean matrices.
#include <iostream>
using namespace std;

// Function to perform Boolean matrix multiplication
void product(bool mat1[100][100], bool mat2[100][100], bool result[100][100], int rows1, int cols1, int cols2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = false;  // Initialize the result matrix element to false
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] = result[i][j] || (mat1[i][k] && mat2[k][j]);
            }
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
    cout<<"\t\t   product of two Boolean matrices"<<endl;
    cout<<"\t\t************************************"<<endl;
    int rows1, cols1, rows2, cols2;
    bool mat1[100][100];
    bool mat2[100][100];
    bool result[100][100];
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2)
    {
        cout << "Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 1;
    }

    cout << "Enter elements of the first matrix (0 for false, 1 for true):" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of the second matrix (0 for false, 1 for true):" << endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    product(mat1, mat2, result, rows1, cols1, cols2);
    cout << "Product of the two matrices:" << endl;
    show(result, rows1, cols2);
    return 0;
}
