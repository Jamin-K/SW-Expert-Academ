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

	// i에 3 or 6 or 9가 들어간 수 만큼 - 출력
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

	// 뒤에 공백이 들어갈 수도 있어서 제거함.
	//if (result.back() == ' ')
	//	result.pop_back();



	cout << result;

	return 0;
}