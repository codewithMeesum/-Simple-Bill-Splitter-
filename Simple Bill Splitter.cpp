#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float totalBill, tipPercent;
    int numberOfPeople;

    // Take basic inputs from the user
    cout << "Enter the total bill amount: ";
    cin >> totalBill;

    cout << "Enter the number of people to split the bill: ";
    cin >> numberOfPeople;

    cout << "Enter the tip percentage you'd like to add: ";
    cin >> tipPercent;

    // Calculate the tip and final amount
    float tipAmount = (tipPercent / 100) * totalBill;
    float totalWithTip = totalBill + tipAmount;
    float amountPerPerson = totalWithTip / numberOfPeople;

    // Set precision for currency-like formatting
    cout << fixed << setprecision(2);

    // Display the results
    cout << "\n----- Bill Summary -----" << endl;
    cout << "Tip amount: " << tipAmount << endl;
    cout << "Total with tip: " << totalWithTip << endl;
    cout << "Each person pays: " << amountPerPerson << endl;

    return 0;
}
                                            
