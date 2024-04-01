// SW Expert Academy 
// D1
// No. 2019


#include <iostream>
#include <cmath>

using namespace std;


int main() {

	int inputCount = 0;

	cin >> inputCount;

	cin.ignore();


	for (int i = 0; i < inputCount + 1; i++) {
	
		double powResult;

		powResult = pow(2, i);

		cout << powResult << " ";


	
	}



	return 0;
}