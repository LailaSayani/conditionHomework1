#include <iostream>
#include <iomanip>
#include<cmath>
#include <string>

using namespace std;

int main() {
    int x, y;
	float res ;

	char opt;
	char per;

	do {
		cout << "Enter two numbers " << endl;
		cout << " x= ";
		cin >> x ;
		cout << " y = ";
		cin >> y;
		cout << "+  To ADD both number " << endl;
		cout << "-  To SUBTRACT both number " << endl;
		cout << "*  To MULTIPLY both number " << endl;
		cout << "/  To DIVIDE both number " << endl;
		cin >> opt;
		switch (opt) {
		case('+'):
			res = x + y;
			break;
		case('-'):
			res = x - y;
			break;
		case('*'):
			res = x * y;
			break;
		case('/'):
			while (y == 0) {
				cout << " please enter non zero value for y " << endl;
				cout << "y = ";
				cin >> y;

			}
			res = (float)x / y;

			break;
		default:
			res = 0;

		}
		cout << x << opt << y << " = " << res << endl;
		cout << "Continue for another operation ? ( if yes press y ) _ ";
		cin >> per;
		if (per == 'y')continue;
		else break;
	} while (per == 'y');

	return 0;


}
