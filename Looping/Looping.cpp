#include <iostream>
using namespace std; 

int main() {

	int i;
	int arr[5];

	for (i = 60; i > 10; i -= 10) {
		cout << i << " Selamat PAgi Dunia" << endl;
	}

	cout << "Nilai i terakhir : " << i << endl;

	for (i = 0; i < 5; i++) {
		cout << i << " Selamat Pagi Dunia" << endl;
		cin >> arr[i];

	}
	for (i = 0; i < 5; i++) {
		cout << "Data Array ke-" << i << " :" << arr[i] << endl;
	}
	return 0;
} 


