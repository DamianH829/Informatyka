#include <iostream>
using namespace std;
int main(){
	int N;
	int liczbaMnozenia = 1;
	
	cout << "Podaj liczbe N: ";
	cin >> N;
	cout << endl;
	int M = N;
	int G = N;
	int D = 0;
	int liczba = 0;
	
	for(int a = 1; M > 0; a++)
	{
		G = N;
		for(int F = 1; G > 0; F++)
		{
			D += 1;
			liczba = liczbaMnozenia * D;
			cout << liczbaMnozenia << " * " << D << " = " << liczba << endl;
			G -= 1;
		}
		D = 0;
		M -= 1;
		liczbaMnozenia += 1;
		cout << endl;
	}
}