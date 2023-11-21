
#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T* arr;
    int size;

public:
    Array(int s) {
        size = s;
        arr = new T[size];
    }

    ~Array() {
        delete[] arr;
    }

    T& operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "Index out of range!" << endl;
            exit(1);
        }
        return arr[index];
    }
};

int main() {
    Array<int> intArray(5);
    Array<double> doubleArray(3);

    // Assign values to intArray
    for (int i = 0; i < 5; i++) {
        intArray[i] = i + 1;
    }

    // Assign values to doubleArray
    for (int i = 0; i < 3; i++) {
        doubleArray[i] = (i + 1) * 1.5;
    }

    // Print values of intArray
    cout << "intArray: ";
    for (int i = 0; i < 5; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Print values of doubleArray
    cout << "doubleArray: ";
    for (int i = 0; i < 3; i++) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    return 0;
}
