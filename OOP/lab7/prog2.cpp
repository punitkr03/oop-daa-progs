//Write program in C++ to handle division by zero exception.
#include <iostream>
#include <exception>
using namespace std;

int main() {
  int numerator, denominator, result;

  cout << "Enter numerator: ";
  cin >> numerator;

  cout << "Enter denominator: ";
  cin >> denominator;

  try {
    if (denominator == 0) {
      throw runtime_error("Division by zero exception");
    }
    result = numerator / denominator;
    cout << "Result: " << result << endl;
  } catch (const exception& e) {
    cout << "Exception caught: " << e.what() << endl;
  }

  return 0;
}
