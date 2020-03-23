#include <iostream>
#include <iomanip>
#include<cmath>
#include <string>

using namespace std;

int main() {


	int x, y;
	float res = 0;

	char opt;

	cout << "Enter two numbers " << endl;
	cin >> x >> y;
	cout << "To ADD both number enter +" << endl;
	cout << "To SUBTRACT both number enter -" << endl;
	cout << "To MULTIPLY both number enter *" << endl;
	cout << "To DIVIDE both number enter /" << endl;
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
			if (y != 0)
				res = x / y;
			else
			{
				cout << "infinity" << endl;
			}
			
			break;
		default:
			res = 0;

	}
	if (opt != '/' || y != 0){
		cout << x << opt << y << " = " << res;

		}

	


	return 0;


}
