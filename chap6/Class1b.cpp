#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
	public:
		char name[MAX_NAME + 1];
		int scoreJapanese;
		int scoreMath;
		int scoreEnglish;

		void show(); 
};

void Student::show() {
	cout << "名称 : " << name << endl
	     << " 国語 : " << scoreJapanese << " 点"
	        ", 数学 : " << scoreMath << " 点"
	        ", 英語 : " << scoreEnglish << " 点" << endl;
}

int main() {
	Student student[] = {
		{ "asako", 73, 98, 86, },
		{ "tada", 64, 45, 40, },
		{ "mio" , 76, 78, 69, },
	};
	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {
		student[i].show();
	}
}

