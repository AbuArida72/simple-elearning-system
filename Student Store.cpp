
#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ofstream out;

	out.open("output2.txt", ofstream::app);

	out.close();
}