#include <iostream>
using namespace std;
int main(){
	int a;
	int b = 2;
	
	cout << "Podaj liczbe N: ";
	cin >> a;
	
	cout << "Liczby parzyste od 2 do " << a << ":" << endl;
	while(b <= a)
	{
		cout << b << endl;
		b += 2;
	}
}