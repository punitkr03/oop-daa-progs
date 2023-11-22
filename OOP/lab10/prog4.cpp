#include <iostream>

// Template function definition
template <typename T1, typename T2>
void printValues(T1 value1, T2 value2) {
    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;
}

int main() {
    // Example with integers and doubles
    printValues(10, "Hello!");

    return 0;
}
