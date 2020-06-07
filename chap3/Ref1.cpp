#include <iostream>
using namespace std;

void WesternToShowa(int& x) {
	if (1926 <= x && x <= 1989) {
		x -= 1925;
	} else {
		x = 0;
	}
}

void Shouwa() {
	int year;

	cout << "please enter B.C." << flush;
	cin >> year;

	WesternToShowa(year);
	if (year != 0) {
		cout << "this year is Showa " << year
			<< " years." << endl;
	} else {
		cout << "this year isn't Showa." << endl;
	}
}

int main() {
	Shouwa();
	Shouwa();
}
