// SW Expert Academy 
// D2
// No. 1926


#include <iostream>
#include <string>

using namespace std;


int main() {

	int inputCount = 0;

	cin >> inputCount;

	cin.ignore();


	string result;

	// i�� 3 or 6 or 9�� �� �� ��ŭ - ���
	for (int i = 1; i <= inputCount; i++) {

		string variable = to_string(i);

		int changeCount = 0;

		while (variable.find("3") != string::npos) {

			changeCount++;
			variable.replace(variable.find("3"), 1, "");
		
		}

		while (variable.find("6") != string::npos) {
			
			changeCount++;
			variable.replace(variable.find("6"), 1, "");

		}

		while (variable.find("9") != string::npos) {

			changeCount++;
			variable.replace(variable.find("9"), 1, "");

		}

		if (changeCount > 0) {
		
			variable = "";

			while (changeCount > 0) {
			
				variable = variable + "-";
				changeCount--;
				
			}
		
		}


	
		result = result + variable + " ";
	
	
	}

	// �ڿ� ������ �� ���� �־ ������.
	//if (result.back() == ' ')
	//	result.pop_back();



	cout << result;

	return 0;
}