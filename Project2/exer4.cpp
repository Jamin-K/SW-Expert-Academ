// SW Expert Academy 
// D1
// No. 2056


#include <iostream>
#include <string>
#include <sstream>

using namespace std;



// 입력값을 스플릿하여 연, 월, 일로 따로 변수에 담음
// 연은 0001~9999 까지
// 월은 1월부터 12월까지
// 일은 월마다 다름
/*
chkFlag 초기값은 0
1. if 연 유효성 체크. 통과하면 chkFlag -> 1
2. if 월 유효성 체크. 통과하면 chkFlag -> 1
3. if 일 유효성 체크. 월에 따라 if 조건 다르게함

*/

int main() {
	int inputCount = 0;

	cin >> inputCount;

	cin.ignore();

	string* arr = new string[inputCount];
	
	string* resultArr = new string[inputCount];



	for (int i = 0; i < inputCount; i++) {
	
		string inputVar = "";

		cin >> inputVar;

		char inputArr[9];

		bool checkDateFlag = false;

		/*char *inputArr = new char[sizeof(inputVar)];*/

		strcpy_s(inputArr, inputVar.c_str()); // 테스트 환경에선 cstring 헤더 추가 후 strcpy 함수로 사용
	

		string year = "1" + string(1, inputArr[0]) + string(1, inputArr[1]) + string(1, inputArr[2]) + string(1, inputArr[3]);

		string month = "1" + string(1, inputArr[4]) + string(1, inputArr[5]);

		string day = "1" + string(1, inputArr[6]) + string(1, inputArr[7]);

		if (stoi(year) < 10000 or stoi(year) > 19999) {
			
			resultArr[i] = "-1";
			continue;
		
		}

		if (stoi(month) < 101 or stoi(month) > 113) {
		
			resultArr[i] = "-1";
			continue;
		
		}

		// 한달이 31일 일떄
		if (stoi(month) == 101 or stoi(month) == 103 or stoi(month) == 105 or stoi(month) == 107 or stoi(month) == 108 or stoi(month) == 110 or stoi(month) == 112) {
		
			if (stoi(day) > 100 and stoi(day) < 132) {
			
				checkDateFlag = true;
			
			}		
		
		}

		// 한달이 28일 일때
		else if (stoi(month) == 102) {
		
			if (stoi(day) > 100 and stoi(day) < 129) {
			
				checkDateFlag = true;
			
			}

		}


		// 한달이 30일 일때 
		else {
		
			if (stoi(day) > 100 and stoi(day) < 131) {

				checkDateFlag = true;

			}
		
		}
			

		if (checkDateFlag == true) {
		
			resultArr[i] = string(1, inputArr[0]) + string(1, inputArr[1]) + string(1, inputArr[2]) + string(1, inputArr[3]) + "/" + string(1, inputArr[4]) + string(1, inputArr[5])
				+ "/" + string(1, inputArr[6]) + string(1, inputArr[7]);
		
		}

		else {
			resultArr[i] = "-1";
		}

	}


	for (int i = 0; i < inputCount; i++) {

		cout << "#" << i + 1 << " " << resultArr[i] << endl;

	}



	return 0;



}