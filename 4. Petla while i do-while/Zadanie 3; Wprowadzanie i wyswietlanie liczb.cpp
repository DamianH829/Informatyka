#include <iostream>
using namespace std;
int main(){
	int a;
	char c;
	
	do
	{
		cout << "Podaj liczbe: ";
		cin >> a;
		
		cout << "Wprowadziles liczbe: " << a << endl;
		
		cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
		cin >> c;
	} while(c != 'n');
	cout << "Dziekuje za wprowadzenie liczb!";
}