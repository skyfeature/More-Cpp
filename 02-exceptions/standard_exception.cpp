#include <iostream>
using namespace std;

class canGoWrong {
public:
	canGoWrong() {
		char *pMemory = new char[999999999999];
		delete [] pMemory;
	}
};

int main() {
	try {
		canGoWrong wrong;
	}
	catch(bad_alloc &e) {
		cout << "Error: " << e.what() << "\n";
	}
	cout << "Hello\n";
	return 0;
}