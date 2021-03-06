//============================================================================
// Name        : 070-ElisionAndOptimization.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int *_pBuffer;

public:
	Test() {
		cout << "constructor" << endl;
		_pBuffer = new int[SIZE] { };
	}

	Test(int i) {
		cout << "parameterized constructor" << endl;

		_pBuffer = new int[SIZE] { };
		for (int j = 0; j < SIZE; ++j) {
			_pBuffer[j] = 7 * i;
		}
	}

	Test(const Test &other) {
		cout << "copy constructor" << endl;

		_pBuffer = new int[SIZE] { };
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	Test& operator=(const Test &other) {
		cout << "assignment" << endl;
		_pBuffer = new int[SIZE] { };
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
	}

	~Test() {
		cout << "destructor" << endl;

		delete[] _pBuffer;
	}

	friend ostream& operator<<(ostream &out, const Test &test);
};

ostream& operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}

int main() {
	Test test1 = getTest();

	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	return 0;
}
