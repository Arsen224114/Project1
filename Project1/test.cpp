#include "test.h"

void test01() {
	int a = 4;
	int b = 6;
	int expected = 10;

	int actual = sum(a, b);

	cout << "Test01 --> ";

	if (expected != actual) {
		cout << "Error!!" << endl;

	}
	else {
		cout << "Pass" << endl;

	}

}

void test02() {
	int a = 6;
	int b = 4;
	int expected = 10;

	int actual = sum(a, b);

	cout << "Test02 --> ";

	if (expected != actual) {
		cout << "Error!!" << endl;

	}
	else {
		cout << "Pass" << endl;

	}

}

void test03() {
	int a = 4;
	int b = 4;
	int expected = 8;

	int actual = sum(a, b);

	cout << "Test03 --> ";

	if (expected != actual) {
		cout << "Error!!" << endl;

	}
	else {
		cout << "Pass" << endl;

	}

}

void test04() {
	int a = -4;
	int b = -6;
	int expected = -10;

	int actual = sum(a, b);

	cout << "Test04 --> ";

	if (expected != actual) {
		cout << "Error!!" << endl;

	}
	else {
		cout << "Pass" << endl;

	}

}