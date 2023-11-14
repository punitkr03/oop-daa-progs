//Copying the contents of one file into another file
//Create the files file1 and file2 before running the program.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	fstream f1;
	fstream f2;

	string ch;
	f1.open("file1.txt", ios::in);
	f2.open("file2.txt", ios::out);

	while (!f1.eof()) {
		getline(f1, ch);
		f2 << ch << endl;
	}
	f1.close();
	f2.close();
	f2.open("file2.txt", ios::in);
	while (!f2.eof()) {
		getline(f2, ch);
		cout << ch << endl;
	}
	f2.close();
	return 0;
}
