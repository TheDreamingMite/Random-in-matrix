#include <iostream>
#include <ctime>

using namespace std;

int main() {
	int a, b;
	cout << "Enter number a: ";
	cin >> a;
	
	cout << "Enter number b: ";
	cin >> b;

	int** m = new int* [10];
	for (int i = 0; i < 10; i++) {
		m[i] = new int[10];
	}

	if (a > b) {
		int t = b;
		b = a;
		a = t;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			m[i][j] = rand() % b + a;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << m[i][j] << "  ";
		}
		cout << endl;
	}
}