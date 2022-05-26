#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    float income = 0.58;
    float sales = 8600000;
    float totalSales;

    // Calculate sale price and print it
    totalSales = income * sales;
    
    cout << "The company has " << sales << " this year and generates " 
         << income << "% of total sales, generating " << totalSales << endl;

    return 0;
}