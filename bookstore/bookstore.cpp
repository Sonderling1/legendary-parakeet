#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item total, trans;
	int count;
	if (cin >> total) {
		while (cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
			}
			else {
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	
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
