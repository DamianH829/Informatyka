#include <iostream>
using namespace std;
int main(){
	float waga;
	float wzrost;
	float BMI;
	
	cout << "Podaj wage (w kg): ";
	cin >> waga;
	
	cout << "Podaj wzrost (w metrach): ";
	cin >> wzrost;
	
	BMI = waga / (wzrost * wzrost);
	
	cout << "Twoje BMI wynosi: " << BMI << endl;
	cout << "Twoj stan wagowy: ";
	if(BMI <= 18.5)
	{
		cout << "Niedowaga";
	}
	else if(BMI > 18.5 && BMI <= 24.9)
	{
		cout << "W normie";
	}
	else if(BMI > 24.9 && BMI <= 29.9)
	{
		cout << "Nadwaga";
	}
	else if(BMI > 29.9)
	{
		cout << "Otylosc";
	}
}