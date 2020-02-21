#include "str.h"

using namespace std;

int main()
{
	str a;
	str b("Hello");

	a = b; // operator=

	cout << "operator=" << endl;
	cout << "\t" << a << endl;
	cout << "\t" << b << endl;

	str c = b; // Copy constructor
	cout << "Copy constructor" << endl;
	cout << "\t" << b << endl;
	cout << "\t" << c << endl;

	a.clear();
	cout << "operator>>" << endl;
	cin >> a;
	cout << "\t" << a << endl;

	str d("!!!");

	cout << "operator=" << endl;
	cout << "\t" << (a + d) << endl;

	return 0;
}