#include <iostream>
using namespace std;

// Function to get data for a matrix
void getdata(int **mat, int rows, int cols)
{
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat[i][j];
        }
    }
}

// Function to display a matrix
void show(int **mat, int rows, int cols)
{
    cout << "The matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to multiply two matrices
int **mul(int **mat1, int rows1, int cols1, int **mat2, int rows2, int cols2)
{
    // Validate the dimensions of the matrices
    if (cols1 != rows2)
    {
        cout << "The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return nullptr;
    }

    // Allocate memory for the resulting matrix
    int **result = new int *[rows1];
    for (int i = 0; i < rows1; i++)
    {
        result[i] = new int[cols2];
    }

    // Calculate the product of the two matrices
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    return result;
}

// Function to display the result of matrix multiplication
void Result(int **result, int rows, int cols)
{
    cout << "The result of matrix multiplication is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

// Driver code
int main()
{
    // Get the dimensions of the matrices
    int rows1, cols1, rows2, cols2;
    cout << "Enter the dimensions of the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the dimensions of the second matrix: ";
    cin >> rows2 >> cols2;

    // Dynamically allocate memory for the matrices
    int **mat1 = new int *[rows1];
    for (int i = 0; i < rows1; i++)
    {
        mat1[i] = new int[cols1];
    }

    int **mat2 = new int *[rows2];
    for (int i = 0; i < rows2; i++)
    {
        mat2[i] = new int[cols2];
    }

    // Get the data for the matrices
    getdata(mat1, rows1, cols1);
    getdata(mat2, rows2, cols2);

    // Display the matrices
    show(mat1, rows1, cols1);
    show(mat2, rows2, cols2);

    // Multiply the matrices
    int **result = mul(mat1, rows1, cols1, mat2, rows2, cols2);

    // Display the result of matrix multiplication
    Result(result, rows1, cols2);

    // Deallocate the memory allocated for the matrices
    for (int i = 0; i < rows1; i++)
    {
        delete[] mat1[i];
    }
    delete[] mat1;

    for (int i = 0; i < rows2; i++)
    {
        delete[] mat2[i];
    }
    delete[] mat2;

    // If the result matrix is not null, deallocate its memory
    if (result != nullptr)
    {
        for (int i = 0; i < rows1; i++)
        {
            delete[] result[i];
        }
        delete[] result;
    }

    return 0;
}