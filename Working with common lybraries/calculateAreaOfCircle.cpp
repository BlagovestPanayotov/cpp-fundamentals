#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter the radius of a circle: ";

    double radius;
    cin >> radius;

    const double pi = 3.14;

    double area = pi * pow(radius, 2);
    cout << "The are is: " << area;

    return 0;
}