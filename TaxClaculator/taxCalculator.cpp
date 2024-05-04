#include <iostream>

using namespace std;

int main()
{
    double sales = 95000;

    const double stateTaxRate = 0.04;
    double stateTax = sales * stateTaxRate;
    cout << "State tax: $" << stateTax << endl;

    const double countyTaxRate = 0.02;
    double countyTax = sales * countyTaxRate;
    cout << "County tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "Total tax: $" << totalTax << endl;

    double totalSales = sales - totalTax;
    cout << "Total sales: $" << totalSales << endl;


    return 0;
}