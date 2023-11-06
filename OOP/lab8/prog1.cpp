/**write a single file handling program in C++ to reading and writing data
on a file. */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string filename = "data.txt";
  ofstream outfile;
  outfile.open(filename);

  if (!outfile) {
    cout << "Error opening file " << filename << endl;
    return 1;
  }

  outfile << "Hello, world!" << endl;
  outfile << "This is a file handling program." << endl;

  outfile.close();

  ifstream infile;
  infile.open(filename);

  if (!infile) {
    cout << "Error opening file " << filename << endl;
    return 1;
  }

  string line;
  while (getline(infile, line)) {
    cout << line << endl;
  }

  infile.close();

  return 0;
}
