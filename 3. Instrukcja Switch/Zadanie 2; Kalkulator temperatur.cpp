#include <iostream>
using namespace std;
int main(){
	float a;
	char c;
	
	cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >> a;
	
	cout << "Podaj jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
	cin >> c;
	
	switch(c)
		{
			case 'K':
				cout << "Temperatura w stopniach Kelvina: " << a + 273.15;
				break;
			case 'F':
				cout << "Temperatura w stopniach Fahrenheita: " << (a * 9/5) + 32;
				break;
			default:
				cout << "Nieznana jednostka";
				break;
		}
}