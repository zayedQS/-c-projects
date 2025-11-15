#include <iostream> 


using namespace std; 

int main() {

	double temp; 
	char unit;
	

	
	cout << "please enter the unit" << endl; 
	cin >> unit;

	if (unit == 'F' || unit == 'f') {

		cout << "f to c" << endl;
		cout << "please enter the temp : " << endl;
		cin >> temp;
		temp = (temp - 32) * 0.5556;
		cout << " : " << temp << "°C";
		
	}
	else if (unit == 'C' || unit == 'c') {
		  

			cout << "C to f" << endl;
			cout << "please enter the temp : " << endl;
			cin >> temp;
			temp = (temp * 1.8) + 32.0;
			cout << " : " << temp << "°F";
	}
	else {
		cout << "re enter ";
	}
	





	return 0;
}