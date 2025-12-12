#include <iostream>
using namespace std;
int main(){
	int a;
	int c = 0;
	int d;
	cout << "Podaj liczbe wierszy: ";
	cin >> a;
	cout << "Podaj liczbe kolumn: ";
	cin >> d;
	
	cout << endl;
	
	for(int b = 1; a <= b; b++)
	{
		for(int e = 1; d <= e; e++)
		{
			b += 2;
			c += b;
			cout << b << "\t";
		}
		cout << endl;
	}
}

// nie dokonczone
// nie dokonczone
// nie dokonczone
// nie dokonczone
// nie dokonczone