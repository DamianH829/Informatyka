#include <iostream>
using namespace std;
int main(){
	int wiersze;
	int liczba = -1;
	int kolumny;
	cout << "Podaj liczbe wierszy: ";
	cin >> wiersze;
	cout << "Podaj liczbe kolumn: ";
	cin >> kolumny;
	
	cout << endl;
	
	for(int ktoryWiersz = 1; wiersze >= ktoryWiersz; ktoryWiersz++)
	{
		for(int ktoraKolumna = 1; kolumny >= ktoraKolumna; ktoraKolumna++)
		{
			liczba += 2;
			cout << liczba << "\t";
		}
		cout << endl;
	}
}