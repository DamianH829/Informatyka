#include <iostream>
using namespace std;
int main(){
	int a;
	int b = 0;
	int c = -1;
	
	cout << "Podaj liczbe calkowita dodatnia N: ";
	cin >> a;
	
	cout << "Liczba liczb parzystych od 1 do " << a << " wynosi: ";
	do
	{
		c += 1;
		b += 2;
	} while(b <= a);
	cout << c;
}