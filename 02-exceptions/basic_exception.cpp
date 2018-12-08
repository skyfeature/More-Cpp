#include <iostream>
using namespace std;

void mightGoWrong() {
	bool error0 = false;
	bool error1 = false;
	bool error2 = true;

	if(error0) {
		throw 8;
	}
	if(error1) {
		throw "Something went wrong.";
	}

	if(error2) {
		throw string("Something else went wrong.");
	}

}

void usesMightGoWrong(){
	mightGoWrong();
}

int main() {
	try {
		usesMightGoWrong();
	}
	catch(int e) {
		cout << "Error code: " << e << "\n";
	}
	catch(char const *e) {
		cout << "Error message: " << e << "\n";
	}
	catch(string &e) {
		cout << "Error message: " << e << "\n";
	}

	cout << "Still running\n";
	return 0;
}
