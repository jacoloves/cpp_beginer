#include <iostream>
using namespace std;

size_t StrLen(char* str) {
	size_t i;
	for (i = 0; str[i] != '\n'; ++i) {

	}
	return i;
}

void ShowLength(char* str) {
	cout << "String「" << str << "」length is "
	     << StrLen(str) << " byte." << endl;
}

int main() {
	ShowLength("Hello");
	ShowLength("");
}
