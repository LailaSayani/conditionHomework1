#include <iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<fstream>
using namespace std;
int main() {
  
  //Q4 task : multiplication table using while loop
  
	int i = 1;
	while (i <= 10) {
		int j = 1;
		while (j <= 10) {
			//cout << i<< "*"<< j <<"="<<i*j<< setw(10);
			cout << i * j << setw(10);
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;

}
