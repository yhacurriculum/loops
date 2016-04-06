/*
	Young Hacks Academy - After School Program
	loop_demo: This program demonstrates the use
	           of loops.
*/

#include <iostream>

using namespace std;

int main()
{
	// this shows a for loop
	// int i = 0  -> sets an int called i to zero
	// i < 10     -> keeps going while i < 10
	// i++        -> increases the value in i by 1

	cout << "This next part demonstrates a for loop!" << endl;

	for(int i = 0; i < 10; i++)
	{
		cout << "i = " << i << endl;
	}

	cout << "This next part demonstrates a while loop!" << endl;
	int k = 0;
	while(k < 10)
	{
		cout << "k = " << k << endl;
		k = k + 1;
	}

	cout << "This next part demonstrates a do loop!" << endl;
	int j = 0;
	do {
		cout << "j = " << j << endl;
		j++;
	} while(j < 10);

	// Notice each loop does the same thing.
	// Try modifying each one to see how their behavior changes!

	return 0;
}
