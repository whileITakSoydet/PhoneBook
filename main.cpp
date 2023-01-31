#include <iostream>
#include "PhoneBook.h"

using namespace std;

int main() {
	cout << "    Phone Book   " << endl;
	Abonent abon("Ron", "911");

	const char* name2{ "Harry" };
	const char* phone2{ "123" };
	Abonent abon2(name2, phone2);

	PhoneBook pb;
	pb.add(abon).add(abon2);
	cout << pb;
	Abonent ab3 = pb[1];
	cout << ab3 << endl;


	int val = 13;
	int& refVal = val;
	const int& refVal2 = val + 9;
	cout << endl;
	int&& RrefVal = val + 6;
	val = 1;
	cout << refVal2 << " " << val << " " << refVal << " " << RrefVal << endl;


	return 0;
}