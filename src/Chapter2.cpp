#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	string line;
	int value;

	cout << "May I have your name? :  ";
	getline(cin, line);
	cout << "So your name is: " << line << ", that's a pretty lame name\n";

	cout << "Can I haz an eenteger, plz: ";
	getline(cin, line);
	value = stoi(line);
	cout << "Your value doubled: " << value*2 << "\n";	

	cout << "Tell me a number, I'll improve that: ";
	getline(cin, line);
	value = stoi(line);
	cout << "I've got " << (value+1) << " which, I believe, is greater than your puny " << (value) << "\n\n";

}
