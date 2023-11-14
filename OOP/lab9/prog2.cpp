// Copying the contents of one file into another file
// Create the files file1 and file2 before running the program.
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		cerr << "Usage: " << argv[0] << " <input_file> <output_file>" << endl;
		return 1;
	}
	const char *inputFileName = argv[1];
	const char *outputFileName = argv[2];
	ifstream inputFile(inputFileName, ios::binary);
	if (!inputFile)
	{
		cerr << "Error opening input file: " << inputFileName << endl;
		return 1;
	}
	ofstream outputFile(outputFileName, ios::binary);
	if (!outputFile)
	{
		cerr << "Error opening output file: " << outputFileName << endl;
		return 1;
	}
	outputFile << inputFile.rdbuf();
	if (outputFile.fail())
	{
		cerr << "Error copying contents from " << inputFileName << " to " << outputFileName << endl;
		return 1;
	}

	cout << "File copy successful." << endl;

	return 0;
}
