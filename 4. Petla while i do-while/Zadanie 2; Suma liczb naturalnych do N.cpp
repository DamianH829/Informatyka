#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c = 0;
	
	cout << "Podaj liczbe N: ";
	cin >> a;
	
	b = a;
	cout << "Suma liczb naturalnych do " << a << ": ";
	while(b >= 0)
	{
		c += b;
		b -= 1;
	}
	cout << c << endl;
}