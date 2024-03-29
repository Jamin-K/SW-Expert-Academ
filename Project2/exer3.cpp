// SW Expert Academy 
// D1
// No. 2070


#include <iostream>
#include <string>
#include <sstream>


using namespace std;

int main() {

	int inputCount = 0;

	cin >> inputCount;

	cin.ignore();

	string* result = new string[inputCount];


	for (int i = 0; i < inputCount; i++) {

		string inputRow = "";

		stringstream inputStream;
	
		getline(cin, inputRow);

		inputStream.str(inputRow);

		inputRow = "";

		int tempArr[2] = { 0, 0 };

		int j = 0;

		while (inputStream >> inputRow) {
		
			tempArr[j] = stoi(inputRow);
			j++;
		
		}

		if (to_string(tempArr[0]) > to_string(tempArr[1]))
			result[i] = ">";

		else if (to_string(tempArr[0]) == to_string(tempArr[1]))
			result[i] = "=";

		else
			result[i] = "<";

	}


	for (int i = 0; i < inputCount; i++) {

		cout << "#" << i + 1 << " " << result[i] << endl;

	}



}