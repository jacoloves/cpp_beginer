#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student {
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int socreEnglish;
};

void Show(const Student& student) {
	cout << "name : " << student.name               << endl
	      << "japanese : " << student.scoreJapanese << " point"
	         ", math : " << student.scoreMath << " point"
		 ", English : " << student.socreEnglish << " point" << endl;
}

int main() {
	Student student[] = {
		{ "john", 73, 98, 86, },
		{ "naomi", 64, 45, 40, },
		{ "kana", 73, 45, 21, },
	};
	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {
		Show(student[i]);
	}
}

