// SW Expert Academy 
// D2
// No. 1859


#include <iostream>
#include <sstream>


using namespace std;


int main() {

	int testCount = 0;

	cin >> testCount;

	cin.ignore();

	long * resultArray = new long[testCount];


	for (int i = 0; i < testCount; i++) {
		int dayCount = 0;

		string inputDayPrice = "";

		stringstream inputStream;

		cin >> dayCount;

		cin.ignore();

		int* dayPrice = new int[dayCount + 1]; 

		getline(cin, inputDayPrice);

		inputStream.str(inputDayPrice);

		inputDayPrice = "";

		int j = 0;

		while (inputStream >> inputDayPrice ) {

			dayPrice[j] = stoi(inputDayPrice); // ���� ������ ������ dayPrice �迭�� ũ�� �߰�.. ���� �����Ǹ� dayPrice �迭�� ������ ���� ������ ������ ��
			j++;
		}

		long long result = 0;
		int maxAmount = 0;


		for (int i = dayCount - 1 ; i >= 0; i--) {

			if (maxAmount < dayPrice[i])
				maxAmount = dayPrice[i];

			if (maxAmount > dayPrice[i])
				result = result + maxAmount - dayPrice[i];
		}

		resultArray[i] = result;
	}


	for (int i = 0; i < testCount; i++) {
	
		cout << "#" << i+1 << " " << resultArray[i] << endl;
	
	}





	return 0;

}