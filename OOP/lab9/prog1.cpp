/**Write a program for developing a matrix class which can handle
integer matrices of different dimensions. Also overload the
operator for addition, multiplication, and comparison of
matrices.*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int** data; // Matrix data
    size_t rows; // Number of rows
    size_t cols; // Number of columns

public:
    // Constructor
    Matrix(size_t rows, size_t cols) : rows(rows), cols(cols) {
        data = new int*[rows];
        for (size_t i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (size_t j = 0; j < cols; ++j) {
                data[i][j] = 2;
            }
        }
    }

    // Destructor
    ~Matrix() {
        for (size_t i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Overload addition operator
    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix dimensions do not match for addition.");
        }

        Matrix result(rows, cols);

        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    // Overload multiplication operator
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw invalid_argument("Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.");
        }

        Matrix result(rows, other.cols);

        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < other.cols; ++j) {
                for (size_t k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Overload equality operator
    bool operator==(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            return false;
        }

        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                if (data[i][j] != other.data[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }

    // Print the matrix
    void print() const {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Example usage
    Matrix A(2, 3);
    A.print();

    Matrix B(3, 2);
    B.print();

    Matrix C = A * B; // Matrix multiplication
    cout << "Result of multiplication:" << endl;
    C.print();

    Matrix D = A + B; // Matrix addition
    cout << "Result of addition:" << endl;
    D.print();

    // Matrix comparison
    if (A == A) {
        cout << "Matrix A is equal to itself." << endl;
    }

    return 0;
}
