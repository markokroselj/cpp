#include <iostream>
using namespace std;

int main() {
	cout << "hello wolrd" << endl;

	int a = 7;
	int i = 0;
	while (i < 49) {
		cout << "sedem" << endl;
		i++;
	}
	int x;
	cin >> x;
	if (x == 7)
		cout << "Je ja vsak sedmi dan." << endl;
	else if (x > 7)
		cout << "je ja vsak "; cout << x; cout << " dan." << endl;
	
	cout << a;
	cin.get();
}

