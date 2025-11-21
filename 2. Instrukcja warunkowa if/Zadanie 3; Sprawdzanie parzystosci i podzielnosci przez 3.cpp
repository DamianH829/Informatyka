#include <iostream>
using namespace std;
int main(){
	int a;
	
	cout << "Podaj liczbe calkowita: ";
	cin >> a;
	
	cout << "Liczba " << a << " ";
	if(a % 2 == 0)
	{
		cout << "jest parzysta" << endl;
	}
	else
	{
		cout << "nie jest parzysta" << endl;
	}
	
	cout << "Liczba " << a << " ";
	if(a % 3 == 0)
	{
		cout << "jest podzielna przez 3";
	}
	else
	{
		cout << "nie jest podzielna przez 3";
	}
}