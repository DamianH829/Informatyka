#include <iostream>
using namespace std;
int main(){
	int p;
	cout << "Podaj wynik egzaminu (liczba punktow):";
	cin >> p;
	
	if(p > 0 && p <= 49)
	{
		cout << "Ocena: niedostateczna";
	}
	else if (p > 49 && p <= 69)
	{
		cout << "Ocena: dostateczna";
	}
	else if (p > 69 && p <= 84)
	{
		cout << "Ocena: dobra";
	}
	else if (p > 84 && p <= 99)
	{
		cout << "Ocena: bardzo dobra";
	}
	else if (p == 100)
	{
		cout << "Ocena: celujaca";
	}
	else
	{
		cout << "Zostaly wpisane niepoprawne wartosci";
	}
}