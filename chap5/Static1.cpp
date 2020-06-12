#include <iostream>
#include <algorithm>

using namespace std;

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress() {
	cout << "アドレスが常に一定化のチェック" << endl;

	void CheckAddress_Sub();
	void CheckAddress_Sub2();
	void CheckAddress_Sub();
}

void CheckAddress_Sub() {
	static int a;
	int b;
	cout << "&a = " << (size_t)&a << endl
	     << "&b = " << (size_t)&b << endl;
}

void CheckAddress_Sub2() {
	cout << "in Sub2" << endl;
	CheckAddress_Sub();
}

void CheckInitOnce_sub();

void CheckInitOnce() {
	cout << endl << "初期化が一回しかされないかのチェック" << endl;

	CheckInitOnce_sub();
	CheckInitOnce_sub();
}

void CheckInitOnce_sub()
{
	static int a  = 3;
	int b = 3;
	cout << "a = " << a << endl
	     << "b = " << b << endl;

	++a;
	++b;
}

void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();


void CheckZeroInit() {
	cout << endl << "0で初期化さえれるかのチャック" << endl;

	CheckZeroInit_Sub();
	CheckZeroInit_Sub2();
}

void CheckZeroInit_Sub() {
	static int a, b, c, d;
	cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void CheckZeroInit_Sub2() {
	int a, b, c, d;
	cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void CheckInvariant_Sub(int*& pa, int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant() {
	cout << endl << "値が保証されるかのチェック" << endl;

	int *pa, *pb;
	CheckInvariant_Sub(pa, pb);
	CheckInvariant_Sub2();

	cout << "*pa = " << *pa << endl
	     << "*pb = " << *pb << endl;
	
}

void CheckInvariant_Sub(int*& pa, int*& pb) {
	static int a = 9;
	int b = 9;
	pa = &a;
	pb = &b;
}

void CheckInvariant_Sub2() {
	int dummy[100];
	fill_n(dummy, 100, 0);
}

int main() {
	CheckAddress();
	CheckInitOnce();
	CheckZeroInit();
	CheckInvariant();
}

