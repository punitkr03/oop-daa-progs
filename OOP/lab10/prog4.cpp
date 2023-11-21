
#include <iostream>

// Template function to print multiple arguments
template <typename... Args>
void print(Args... args) {
    // Using fold expression to print all arguments
    (std::cout << ... << args) << std::endl;
}

int main() {
    // Calling the print function with different data types
    print(10, "Hello", 3.14, 'A');

    return 0;
}
