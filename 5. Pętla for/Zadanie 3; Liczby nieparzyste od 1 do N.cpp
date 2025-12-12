#include <iostream>
using namespace std;
int main(){
	int a;
	int c = 0;
	cout << "Podaj liczbe N: ";
	cin >> a;
	
	cout << endl;
	
	cout << "Liczby nieparzyste od 1 do " << a << endl;
	for(int b = 1; a >= b; b+=2)
	{
		c += b;
		cout << b << endl;
	}
}