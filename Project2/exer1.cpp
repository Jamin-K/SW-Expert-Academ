// SW Expert Academy 
// D1
// No. 2072
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	// [inputCount][10] �����������迭 ���

	int inputCount = 0;
	int n = 0;
	int sumResult = 0;


	cin >> inputCount; 
	cin.ignore(); // cin.ignore()�� ���۸� ����°� �ƴ϶� �� �� ���ڸ� ����.
	

	int** arr = new int* [inputCount];

	for (int i = 0; i < inputCount ; i++) {
		
		arr[i] = new int[10];
		string inputStr = "";
		string splitResult = "";

		stringstream inputStrSteam;
		

		// ���� �Է� �ޱ�
		getline(cin, inputStr, '\n');
		//cin.ignore(); �׷��� ���⿡ ignore�� ����ϸ� �� �� ���ڰ� �������� ��µǴ� ��.

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
