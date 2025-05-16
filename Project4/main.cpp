#include <iostream>
using namespace std;

bool chek_elements(int* array, int size, int value);


int main() {
	int array1[]{ 1,2,3,4,5,6,7,8,9 };
	int array2[]{ 1,2,3,4,5,6,7,8 };
	int array3[]{ 1 };

	cout << (chek_elements(array1, 9, 2) ? "pass" : "fail") << endl;
	cout << (!chek_elements(array2, 8, 33) ? "pass" : "fail") << endl;
	cout << (chek_elements(array3, 1, 1) ? "pass" : "fail") << endl;

	return 0;
}