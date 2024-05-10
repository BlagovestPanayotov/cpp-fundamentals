#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the tempreture in celsius: ";
    double tCelsius;

    cin >> tCelsius;

    double tFahrenheut = (tCelsius * 9 / 5) + 32;

    cout << "The tempreture in fahrenheit is: " << tFahrenheut;

    return 0;
}
