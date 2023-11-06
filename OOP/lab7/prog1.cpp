//Program to demonstrate how certain exception types are not allowed to be thrown

#include <iostream>
#include <exception>
using namespace std;

int main() {
    try {
        throw 5; // throws an integer
    }
    catch (exception& e) {
        cout << "Caught an exception: " << e.what() << endl;
    }
    catch (...) {
        cout << "Caught an exception of unknown type" << endl;
    }
    return 0;
}
