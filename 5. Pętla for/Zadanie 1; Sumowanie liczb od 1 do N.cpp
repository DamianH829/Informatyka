#include <iostream>
using namespace std;
int main(){
	int a;
	int c = 0;
	cout << "Podaj liczbe N: ";
	cin >> a;
	
	for(int b = 0; b <= a; b++)
	{
		c += b;
	}
	cout << "Suma liczb od 1 do " << a << " wynosi: " << c;
}