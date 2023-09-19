//Write a C++ program to swap the values two integer members of different classes using friend function.

#include <iostream>
using namespace std;

class xyz;
class abc {
    int a;
public:
    void getdata() {
        cout << "Enter a: ";
        cin >> a;
    }
    friend void swap(abc &, xyz &);
    void display() {
        cout << "a = " << a << endl;
    }
};

class xyz {
    int b;
public:
    void getdata() {
        cout << "Enter b: ";
        cin >> b;
    }
    friend void swap(abc &, xyz &);
    void display() {
        cout << "b = " << b << endl;
    }
};

void swap(abc &x, xyz &y) {
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main() {
    abc a;
    xyz b;
    a.getdata();
    b.getdata();
    cout << "Before swapping: " << endl;
    a.display();
    b.display();
    swap(a, b);
    cout << "After swapping: " << endl;
    a.display();
    b.display();
    return 0;
}