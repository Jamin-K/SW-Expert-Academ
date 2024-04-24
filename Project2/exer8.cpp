// SW Expert Academy 
// D2
// No. 2007

#include <iostream>
#include <string>

using namespace std;


int main() {

	int inputCount = 0;

	cin >> inputCount;

	//char** inputArray = new char* [inputCount];

	int* resultArray = new int[inputCount];

	for (int i = 0; i < inputCount; i++) {
		
		string inputRow;

		int patternLength = 0;

		cin >> inputRow;


		for (int j = 2; j < 10; j++) { // 최대 10자리까지만 비교하면 됨
		
			string temp, compareTemp;

			if (inputRow.substr(0, j) == inputRow.substr(j, j)) {
			
				patternLength = j;
				break;
			
			}
		
		}

		resultArray[i] = patternLength;

	}

	for (int i = 0; i < inputCount; i++) {
	
		cout << "#" << i + 1 << " " << resultArray[i] << endl;
	
	}

	return 0;

}