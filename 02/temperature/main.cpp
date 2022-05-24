#include <iostream>

using namespace std;

int main()
{
	double temperature = 0;
	cout << "Enter a temperature: ";
	cin >> temperature;
	
	double cel_to_fah = temperature * 1.8 + 32;
	double fah_to_cel = (temperature - 32) / 1.8;
	cout << endl << temperature << " degrees Celsius is " << cel_to_fah << " degrees Fahrenheit" << endl;
	cout << temperature << " degrees Fahrenheit is " << fah_to_cel << " degrees Celcius" << endl;
}