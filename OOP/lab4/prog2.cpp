//Write an inline function using C== to find largest of three numbers.
#include <iostream>
using namespace std;

inline int max(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Largest number is: " << max(a, b, c);
    return 0;
}