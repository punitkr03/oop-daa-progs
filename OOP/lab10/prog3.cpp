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
    for (int i = 0; i < 5; i++) {
        intArray[i] = i + 1;
    }
    cout << "intArray: ";
    for (int i = 0; i < 5; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;
    return 0;
}