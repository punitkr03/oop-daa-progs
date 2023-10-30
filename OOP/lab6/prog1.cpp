#include <iostream>
using namespace std;

class Shape {
protected:
    double base;
    double height;

public:
    void getData() {
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
    }

    virtual void displayArea() {}
};

class Triangle : public Shape {
public:
    void displayArea() override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    void displayArea() override {
        double area = base * height;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Shape *shape;
    char choice;
    cout << "Enter 'T' for Triangle or 'R' for Rectangle: ";
    cin >> choice;

    if (choice == 'T' || choice == 't') {
        shape = new Triangle();
    } else if (choice == 'R' || choice == 'r') {
        shape = new Rectangle();
    } else {
        cout << "Invalid choice. Exiting.";
        return 1;
    }

    shape->getData();
    shape->displayArea();

    delete shape;

    return 0;
}
