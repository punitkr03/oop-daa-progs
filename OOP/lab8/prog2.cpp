
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open the file in append mode
    ofstream file("data.txt", ios::app);

    // Check if the file is opened successfully
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Get input from user
    string data;
    cout << "Enter data to append: ";
    getline(cin, data);

    // Append data to file
    file << data << endl;

    // Close the file
    file.close();

    cout << "Data appended successfully!" << endl;

    return 0;
}
