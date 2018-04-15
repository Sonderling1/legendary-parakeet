#include <iostream>

using namespace std;

int main() {
  // primer p. 17
  // counts how many times a number occurred consecutively
  
	int first, current;
	int count;
	if (cin >> first) {
		count = 1;
		while (cin >> current) {
			if (current == first) {
				count++;
			}
			else {
				cout << first << " occured " << count << " times" << endl;
				first = current;
				count = 1;
			}
		}
	}

	cout << first << " occured " << count << " times" << endl;


	system("pause>NULL");
	return 0;
}
