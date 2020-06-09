#include <iostream>
using namespace std;

size_t StrLen(char* str) {
	char* p;
	for (p = str; *p != '\n'; ++p) {

	}
	return p - str;
}

void ShowLength(char* str) {
	cout << "String「" << str << "」length is "
	     << StrLen(str) << " byte." << endl;
}

int main() {
	ShowLength("Hello");
	ShowLength("");
}
