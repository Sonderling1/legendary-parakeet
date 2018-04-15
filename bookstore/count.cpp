/*
  This is exercise 1.23 on p. 24 of C++ Primer
*/

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item first, current;
	int count;
	if (cin >> first) {
		count = 1;
		while (cin >> current) {
			if (current.isbn() == first.isbn()) {
				count++;
			}
			else {
				cout << "The ISBN " << first.isbn() << " occured " << count << " times" << endl;
				first = current;
				count = 1;
			}
		}
	}

	cout << "The ISBN " << first.isbn() << " occured " << count << " times" << endl;

	/*
	0-201-78345-x 3 20.00
	0-201-78345-x 1 10.00
	0-201-78345-x 5 30.00
	0-201-78445-x 4 10.00
	0-201-78445-x 2 30.00
	0-201-78445-x 6 15.00
	0-201-78445-x 5 36.00
	0-201-18455-x 1 6.00
	0-201-18455-x 2 6.00
*/
	system("pause>NULL");
	return 0;
	
}
