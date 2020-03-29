#include <iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;
int main() {
  
  //Q2 calculate the sum of the following series using nested loop
  
  
  int res = 1;
	int pow = 1;
	int sum = 1;
	int index = 1;
	while (index <= n) {
		while (pow <= index) {
			res *= x;
			sum += res;
			pow++;
		}
		
		index++;
	}
	cout << sum;
  return 0;

}
