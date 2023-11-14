/**Write a program in C++ to implement the exception handling
with multiple catch statements.*/

#include <iostream>
using namespace std;

void processNumber(int num) {
    try {
        if (num == 0) {
            throw "Number cannot be zero.";
        } else if (num < 0) {
            throw out_of_range("Number is out of range.");
        } else {
            // Perform some operation with the number
            cout << "Result: " << 100 / num << endl;
        }
    } catch (const char* message) {
        cerr << "Caught exception: " << message << endl;
    } catch (const out_of_range& e) {
        cerr << "Caught exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught unknown exception." << endl;
    }
}

int main() {
    int userInput;

    cout << "Enter a number: ";
    cin >> userInput;

    processNumber(userInput);

    return 0;
}
