#include <iostream>

using namespace std;

//for문 으로 별찍기 ,for문은 그저 반복문.. 간단하게 반복시켜주는 역할을 할 뿐이라는 점을 명심해라
//완
int main() {

 

	int num, count;

	cout<<"정수입력>>";

	cin >> num;

	count = num;

	/*

	for (int i = 0; i < num; i++) {

		for (int j = count; j >0; j--) {

			cout << "*";

 

		}

		count--;

		cout << "\n";

	}

	*/

	/*while문으로 별찍기

 

	while (num>0)

	{

		for (int i = 0; i < num; i++) {

			cout << "*";

		}

		cout << "\n";

		

		num--;

	}

	*/

 

	//do while문으로 별찍기

	/*

	do {

		for (int i = 0; i < num; i++) {

			cout << "*";

		}

		cout << "\n";

 

		num--;

 

	} while (num > 0);

	*/

 

 

	return 0;

}