#include <iostream>
using namespace std;

const char* const MONTH_NAME[] = {
	"1", "2", "3", "4", "5", "6",
	"7", "8", "9", "10", "11", "12"
};

const char* GetOldMonthName(int month) {
	if (1 <= month && month <= 12) {
		return MONTH_NAME[month - 1];
	}
	return 0;
}

int main() {
	int month;

	cout << "何月>" << flush;
	cin >> month;

	const char* name = GetOldMonthName(month);
	if (name == 0) {
		cout << "no" << endl;
	} else {
		cout << name << endl;
	}
}
