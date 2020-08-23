#include <iostream>
#include <cstdio>
#include <string>

#include "stack.h"

using namespace std;

int main () {
	auto si = Stack<int>(5);
	int i;

	try {
		for(i=0; i<5; i++)
			si.push(i);
	} catch (StackOverflowError& e) {
		cerr << e.what() << "\n";
	}
	cout << "After pushing 5 elements:\n";
	si.display();

	try {
		for (i=0; i<2; i++)
			si.pop();
	} catch (StackUnderflowError& e) {
		cerr << e.what() << "\n";
	}
	// si.pop();
	cout << "After popping twice:\n";
	si.display();
	
	return 0;
}