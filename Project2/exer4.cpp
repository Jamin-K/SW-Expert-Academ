// SW Expert Academy 
// D1
// No. 2056


#include <iostream>
#include <string>
#include <sstream>

using namespace std;



// �Է°��� ���ø��Ͽ� ��, ��, �Ϸ� ���� ������ ����
// ���� 0001~9999 ����
// ���� 1������ 12������
// ���� ������ �ٸ�
/*
chkFlag �ʱⰪ�� 0
1. if �� ��ȿ�� üũ. ����ϸ� chkFlag -> 1
2. if �� ��ȿ�� üũ. ����ϸ� chkFlag -> 1
3. if �� ��ȿ�� üũ. ���� ���� if ���� �ٸ�����

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

		strcpy_s(inputArr, inputVar.c_str()); // �׽�Ʈ ȯ�濡�� cstring ��� �߰� �� strcpy �Լ��� ���
	

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

		// �Ѵ��� 31�� �ϋ�
		if (stoi(month) == 101 or stoi(month) == 103 or stoi(month) == 105 or stoi(month) == 107 or stoi(month) == 108 or stoi(month) == 110 or stoi(month) == 112) {
		
			if (stoi(day) > 100 and stoi(day) < 132) {
			
				checkDateFlag = true;
			
			}		
		
		}

		// �Ѵ��� 28�� �϶�
		else if (stoi(month) == 102) {
		
			if (stoi(day) > 100 and stoi(day) < 129) {
			
				checkDateFlag = true;
			
			}

		}


		// �Ѵ��� 30�� �϶� 
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