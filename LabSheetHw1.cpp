#include <iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;
int main() {
	
  
  //Q3 task to calculate the sum of all numbers between 2 intervals entered by the user by using (while) loop.
  
  	int n1, n2;
	do {
		cout << "Let the first number greater than the second number "<< endl;
		cout << "Enter the first positive number ";
		cin >> n1;
		cout << "Enter the second positive number ";
		cin >> n2;
	} while ((n1 > n2) || (n1,n2<0));
  
	int sum = 0;
	while (n1 <= n2) {
		sum += n1;
		n1++;
	}
	cout << sum;
  
	return 0;

}
