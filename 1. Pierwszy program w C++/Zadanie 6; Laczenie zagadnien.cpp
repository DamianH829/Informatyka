#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	
	cout << "Podaj druga liczbe: ";
	cin >> b;
	
	c = a + b;
	
	cout << "Suma: " << a + b << endl;
	
	if(c % 2 == 0){
		cout << "Suma jest liczba parzysta";
	}
	else{
		cout << "Suma jest liczba nieparzysta";
	}
}