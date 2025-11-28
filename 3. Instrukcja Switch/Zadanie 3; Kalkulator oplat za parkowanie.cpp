#include <iostream>
using namespace std;
int main(){
	float a;
	char c;
	
	cout << "Podaj liczbe godzin parkowania: ";
	cin >> a;
	
	cout << "Podaj rodzaj pojazdu (S - Samochod, M - motocykl, A - autobus): ";
	cin >> c;
	
	switch(c)
		{
			case 'S':
				cout << "Oplata za parkowanie: " << a * 5 << " zl";
				break;
			case 'M':
				cout << "Oplata za parkowanie: " << a * 3 << " zl";
				break;
			case 'A':
				cout << "Oplata za parkowanie: " << a * 10 << " zl";
				break;
				
			default:
				cout << "Nieznany typ pojazdu";
				break;
		}
}