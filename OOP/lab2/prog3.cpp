#include <iostream>
using namespace std;

class Figure {
    private:
        float side, l, b, rh, r, h;
    public:
        void getdata(void);
        float Volume(float side);
        float Volume(float l, float b, float rh);
        float Volume(float r, float h);
        void display(void);
};

void Figure :: getdata(void) {
    cout << "Enter side of cube " << endl;
    cin >> side;
    cout << "Enter length of cuboid " << endl;
    cin >> l;
    cout << "Enter breadth of cuboid " << endl;
    cin >> b;
    cout << "Enter height of cuboid " << endl;
    cin >> rh;
    cout << "Enter radius of cylinder " << endl;
    cin >> r;
    cout << "Enter height of cylinder " << endl;
    cin >> h;
}

float Figure :: Volume(float side) {
    return side*side*side;
}

float Figure :: Volume(float l, float b, float rh) {
    return l*b*rh;
}

float Figure :: Volume(float r, float h) {
    return 3.14*r*r*h;
}

void Figure :: display(void) {
    cout << "Volume of cube = " << Volume(side) << endl;
    cout << "Volume of cuboid = " << Volume(l,b,rh) << endl;
    cout << "Volume of cylinder = " << Volume(r,h) << endl;
}

int main() {
    Figure fig;
    fig.getdata();
    fig.display();

    return 0;
}