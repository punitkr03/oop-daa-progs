#include <iostream>
using namespace std;

class MyClass
{
public:
    int regularData;
    static int staticData;
    MyClass(int value) : regularData(value) {}
    void regularMemberFunction()
    {
        cout << "Regular member function called. regularData: " << regularData << endl;
    }
    static void staticMemberFunction()
    {
        cout << "Static member function called. staticData: " << staticData << endl;
    }
    void constMemberFunction() const
    {
        cout << "Constant member function called. regularData: " << regularData << endl;
    }
};
int MyClass::staticData = 0;
int main()
{
    MyClass obj1(10);
    MyClass obj2(20);

    cout << "regularData: " << obj1.regularData << endl;
    cout << "staticData: " << MyClass::staticData << endl;
    obj1.regularMemberFunction();
    MyClass::staticMemberFunction();
    obj1.constMemberFunction();
    return 0;
}