
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void store() {
	ofstream out;

	out.open("output2.txt", ofstream::app);
	out << "Hello \nHello";

	out.close();
}

void read() {
	string line;

	ifstream MyReadFile("output2.txt");

	while (getline(MyReadFile, line))
	{
		cout << line;
	}
}