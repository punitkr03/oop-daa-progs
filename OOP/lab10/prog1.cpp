#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T min(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 3.14, float2 = 2.71;
    char char1 = 'A', char2 = 'B';

    std::cout << "Max of " << int1 << " and " << int2 << " is " << max(int1, int2) << std::endl;
    std::cout << "Min of " << int1 << " and " << int2 << " is " << min(int1, int2) << std::endl;

    std::cout << "Max of " << float1 << " and " << float2 << " is " << max(float1, float2) << std::endl;
    std::cout << "Min of " << float1 << " and " << float2 << " is " << min(float1, float2) << std::endl;

    std::cout << "Max of " << char1 << " and " << char2 << " is " << max(char1, char2) << std::endl;
    std::cout << "Min of " << char1 << " and " << char2 << " is " << min(char1, char2) << std::endl;

    return 0;
}
