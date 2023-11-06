/**
 Write a program to compute square root of a number. The input value must be tested
for validity. If it is negative, the user defined function my_sqrt() should raise an
exception.
*/

#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

double my_sqrt(double x) {
    if (x < 0) {
        throw invalid_argument("Cannot compute square root of negative number.");
    }
    return sqrt(x);
}

int main() {
    double x;
    cout << "Enter a number: ";
    cin >> x;
    try {
        double result = my_sqrt(x);
        cout << "The square root of " << x << " is " << result << endl;
    } catch (invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}

