#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int intArr[] = {5, 2, 8, 12, 3};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    bubbleSort(intArr, intSize);

    cout << "After sorting: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    return 0;
}
