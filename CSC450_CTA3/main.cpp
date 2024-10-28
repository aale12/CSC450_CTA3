#include <iostream>
using namespace std;

// function to take in a value, allocate memory to a pointer variable
int* assign(int value) {
	int* ptr = new int(value);
	return ptr;
}


int main() {
	// declare array of 3 int values
	int values[3];
	// declare array of 3 int pointers
	int* pointers[3];

	// prompt user to enter three integers and store them
	// assign pointers to each value as well
	for (int i = 0; i < 3; ++i) {
		cout << "Enter Value " << (i + 1) << ": ";
		cin >> values[i];
		pointers[i] = assign(values[i]);
	}

	//displaying the values and their pointers
	for (int i = 0; i < 3; ++i) {
		cout << "Value " << (i + 1) << ": " << values[i]
	         << ", Pointer to Value " << (i + 1)
			 << ": " << *pointers[i] << endl;
	}


	// delete values
	for (int i = 0; i < 3; ++i) {
			delete pointers[i];
	}

	cout << "\n Memory has been deallocated" << endl;

	return 0;

}
