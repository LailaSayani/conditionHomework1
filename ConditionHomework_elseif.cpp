#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
int main() {
	int x, y;
	float res=0;
	char op;
	cout << "Enter two numbers " << endl;
	cin >> x >> y;
	cout << "To ADD both number enter +" << endl;
	cout << "To SUBTRACT both number enter -" << endl;
	cout << "To MULTIPLY both number enter *" << endl;
	cout << "To DIVIDE both number enter /" << endl;
	cin >> op;
	if (op == '+')
	{
		res = x + y;
	}
	else if (op == '-')
	{
		res = x - y;
	}
	else if (op == '*')
	{
		res = x * y;
	}
	else if (op == '/')
	{
		if (y != 0)
			res = x / y;
		else
		{
			cout << "infinity"<< endl;
		}
	
	}
	

	if (op != '/' || y != 0)
	{
		cout << x << op << y << " = " << res;
	}
	


	//cout << x << op << y << " = " << "infinity";

	return 0;


}