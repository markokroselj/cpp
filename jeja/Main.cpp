#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n,z,k;
	cout << "vnesi zacentno vrednost" << endl;
	cin >> n;
	
	int y;
	if (n > 0) {
		z = n; k = 0;
	}
	else {
		z = abs(n); k = n;
	}
	cout << "f(x)  | y = x * x" << endl;
	for(int x = k; x <= z; x++) {
		y = pow(x,2);
		if (x >= 0) {
			cout << x << "  | " << y << endl;
		}
		else {
			cout << x << " | " << y << endl;
		}
		
		
	}
	system("pause");
}