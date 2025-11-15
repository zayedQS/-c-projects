#include <iostream> 

using namespace std;

int main() {



	double x; 
	double y; 
	cout << "enter num1: " << endl;
	cin >> x; 
	cout << "enter num2: " << endl;
	cin >> y; 

	cout << " + " << " - " << " / " << " * " << endl;
	char opr;
	cin >> opr; 

	if (opr == '+') {

		cout << x + y << endl;

	}
	if (opr == '-') {



		cout << x - y << endl; 

	}
	if (opr == '/') {

		cout << x / y << endl; 

	}
	else {
		if (opr == '*') {
			cout << x * y << endl; 
		}
	}


















	return 0; 
}