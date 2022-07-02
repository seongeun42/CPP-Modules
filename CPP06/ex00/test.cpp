#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <typeinfo>

using namespace std;

int main()
{
	string num = "afas152.1";
	char* nan = NULL;
	char c = 'c';
	int i = 12;
	float f = 5.1422f;
	double d = 10.153;

	double cNum = strtod(num.c_str(), &nan);
	cout << cNum << " : " << typeid(cNum).name() << endl;
	cout << nan << " : " << typeid(nan).name() << endl;

	cout << c << " -> " << static_cast<double>(c) << endl;
	cout << i << " -> " << static_cast<double>(i) << endl;
	cout << f << " -> " << static_cast<double>(f) << endl << endl;

	cout << d << " -> " << static_cast<char>(d) << endl;
	cout << d << " -> " << static_cast<int>(d) << endl;
	cout << d << " -> " << static_cast<float>(d) << endl;

	return 0;
}