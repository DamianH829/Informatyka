#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	char c;
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	
	cout << "Podaj druga liczbe: ";
	cin >> b;
	
	cout << "Podaj znak dzialania (+, -, *, /): ";
	cin >> c;
	
	cout << "Wynik: ";
	switch(c)
	{
		case '+':
				cout << a + b;
				break;
		case '-':
				cout << a - b;
				break;
		case '*':
				cout << a * b;
				break;
		case '/':
				cout << a / b;
				break;
		default:
				cout << "Zostal podany nieznany znak dzialania";
	}
}