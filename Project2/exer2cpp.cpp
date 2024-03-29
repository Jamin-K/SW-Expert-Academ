// SW Expert Academy 
// D1
// No. 2071

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main() {

	int inputCount = 0;

	cin >> inputCount;

	cin.ignore(); // 위의 코드에서 값+\n 을 입력했지만 \n은 inputCount에 들어가지 않아 \n이 버퍼에 남아있는 상태. 그래서 버퍼 제거(맨 앞 문자)를 위해 ignore

	int *resultArr = new int[inputCount];


	for (int i = 0; i < inputCount; i++) {

		string inputStr = "";
		stringstream inputStream;
		int arrSum = 0;

		getline(cin, inputStr, '\n');

		inputStream.str(inputStr);

		while (inputStream >> inputStr) {

			arrSum = stoi(inputStr) + arrSum;
		}

		resultArr[i] = round(arrSum / 10.0);
	}
	
	

	for (int i = 0; i < inputCount; i++) {

		cout << "#" << i + 1 << " " << resultArr[i] << endl;
	
	}


	return 0;
}

//
//3
//3 17 1 39 8 41 2 32 99 2
//22 8 5 123 7 2 63 7 3 46
//6 63 2 3 58 76 21 33 8 1