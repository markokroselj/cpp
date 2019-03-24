#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int x;
	while (true) {
		cout << "je ja" << endl;
		MessageBox(NULL, "je ja", "je ja", MB_ICONEXCLAMATION);
		cin >> x;
		if (x == 7) {
			break;
		}
	}
	
}
