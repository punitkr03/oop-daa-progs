#include <iostream>
using namespace std;

class Student {
    private:
        string name, ID;
        int sem, marks[6];
    public:
        void getdata(void);
        void display(void);
        int highest(int marks[]);
        int lowest(int marks[]);
        float average(int marks[]);
};

void Student :: getdata(void) {
    cout << "Enter name " << endl;
    cin >> name;
    cout << "Enter ID " << endl;
    cin >> ID;
    cout << "Enter semester " << endl;
    cin >> sem;
    cout << "Enter marks of 6 subjects." << endl;
    for(int i = 0; i < 6; i++) {
        cin >> marks[i];
    }
}

int Student :: highest(int marks[]) {
    int max = marks[0];
    for(int i = 1; i < 6; i++){
        if(marks[i] > max)
            max = marks[i];
    }
    return max;

}

int Student :: lowest(int marks[]) {
    int min = marks[0];
    for(int i = 1; i < 6; i++){
        if(marks[i] < min)
            min = marks[i];
    }
    return min;
}

float Student :: average(int marks[]) {
    int sum = 0;
    for(int i = 0; i < 6; i++){
        sum += marks[i];
    }
    return (sum/6);
}

void Student :: display(void) {
    cout << "Name of the student is : " << name << endl;
    cout << "ID : " << ID << endl;
    cout << "Semester : " << sem << endl;
    cout << "Highest marks : " << highest(marks) << endl;
    cout << "Lowest marks : " << lowest(marks) << endl;
    cout << "Average marks : " << average(marks) << endl;
}

int main() {
    Student st1;
    st1.getdata();
    st1.display();

    return 0;
}