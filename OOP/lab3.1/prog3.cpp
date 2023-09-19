/**Write a C++ program for addition of two complex numbers. Use
constructor to initialize data members of complex class. After
addition use destructor and delete operator and free up memory.*/

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) {
        real = r;
        imag = i;
    }

    Complex add(Complex &other) {
        double newReal = real + other.real;
        double newImag = imag + other.imag;
        return Complex(newReal, newImag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    ~Complex() {}
};

int main() {
    Complex* num1 = new Complex(3.0, 4.0);
    Complex* num2 = new Complex(1.5, 2.5);

    cout << "Number 1: ";
    num1->display();
    cout << "Number 2: ";
    num2->display();

    Complex result = num1->add(*num2);

    cout << "Sum: ";
    result.display();

    delete num1;
    delete num2;

    return 0;
}
