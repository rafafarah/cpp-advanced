//============================================================================
// Name        : 066-CapturingThisInLambda.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int one { 1 };
	int two { 2 };

public:
	void run() {
		int three { 3 };
		int four { 4 };

		auto pLambda = [this, three, four]() {
			one = 111;
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};

		pLambda();
	}
};

int main() {
	Test test;
	test.run();

	return 0;
}
