#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	ostringstream oss("what the fuck ? ");
	cout << oss.str() << endl;

	oss << 16.9 << "ooooo";
	cout << oss.str() << endl;

	oss << "gibberish" << 123;
	cout << oss.str() << endl;
	return 0;
}
