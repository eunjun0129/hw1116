#include <iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth VIP2(60), * mickey;  // need for CHealth() to be public 
	mickey = new CHealth(20);

	cout << "  " << VIP2.age << "  " << mickey->age << endl;

	VIP2.measurefaren();
	mickey->measureCel();

	cout << "  " << mickey->cel << "C  " << VIP2.faren << "F \n";
	cout << "  size " << sizeof(CHealth) << "\n";
	getchar();
	return 1;
}