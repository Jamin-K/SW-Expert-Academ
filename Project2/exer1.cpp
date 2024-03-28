// SW Expert Academy 
// D1
// No. 2072
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	// [inputCount][10] 이차원동적배열 사용

	int inputCount = 0;
	int n = 0;
	int sumResult = 0;


	cin >> inputCount; 
	cin.ignore(); // cin.ignore()는 버퍼를 지우는게 아니라 맨 앞 숫자를 지움.
	

	int** arr = new int* [inputCount];

	for (int i = 0; i < inputCount ; i++) {
		
		arr[i] = new int[10];
		string inputStr = "";
		string splitResult = "";

		stringstream inputStrSteam;
		

		// 한줄 입력 받기
		getline(cin, inputStr, '\n');
		//cin.ignore(); 그래서 여기에 ignore를 사용하면 맨 앞 숫자가 지워지고 출력되는 것.

		inputStrSteam.str(inputStr);

		n = 0;

		while (inputStrSteam >> splitResult) {

			arr[i][n] = stoi(splitResult);
			n++;
			
		}

	}



	for (int i = 0; i < inputCount; i++) {

		sumResult = 0;

		for (int j = 0; j < 10; j++) {
		
			if (arr[i][j] % 2 != 0) {
				sumResult = sumResult + arr[i][j];
			}
		
		}		

		cout << "#" << i + 1 << " " << sumResult << endl;
	
	}


	return 0;
}
