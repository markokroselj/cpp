#include <iostream>
#include <math.h>
# define M_PI 3.14159265358979323846 
using namespace std;

int main() {
	double r, o, p;
	const double pi = M_PI;
	
	//vnos polmera
	cout << "vnesi polmer kroga" << endl;
	cin >> r;
	//izracun obsega in ploscine
	o = 2 * pi * r;
	p = pi * r * r;
	//izpis obsega in ploscine
	cout << "obseg kroga s polmerom: " << r << " je " << o << endl;
	cout << "ploscina kroga je " << p << endl;
	system("pause");
}