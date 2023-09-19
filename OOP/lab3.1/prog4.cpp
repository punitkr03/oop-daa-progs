//WAP in C++ to show object as a function argument.
#include <iostream>
using namespace std;

class xyz {
    int a;
public:
    void getdata() {
        cout << "Enter a: ";
        cin >> a;
    }
    void display() {
        cout << "a = " << a << endl;
    }
};

void show(xyz x) {
    x.display();
}

int main() {
    xyz x;
    x.getdata();
    show(x);
    return 0;
}