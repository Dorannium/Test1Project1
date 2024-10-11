/*
Title: Test 1: project 1
File Name: Test1Project1
Programmer: Cody Drumheller
Date:20241011
Requirements:
*/

#include <iostream>
#include <iomanip>
using namespace std;

double getCommissionRate(double sales)
{
    if (sales < 10000) {
        return 0.55;
    }
    else if (sales <= 14999) {
        return 0.10;
    }
    else if (sales <= 17999) {
        return 0.12;
    }
    else if (sales <= 21999) {
        return 0.14;
    }
    else {
		return 0.16;
    }

}
int main()
{
	double sales, advancedPay, commissionRate, 
    commission, remainingPay;
    char repeat;

    do {
		cout << "Enter the salesperson's monthly sales: ";
		cin >> sales;
		cout << "Enter the amount of advanced pay for this salesperson: ";
		cin >> advancedPay;

		commissionRate = getCommissionRate(sales);
		commission = sales * commissionRate;
		remainingPay = commission - advancedPay;

		cout << fixed << setprecision(2);
        cout << "\npay Result\n";
		cout << "------------------\n";
        cout << "sales $ " << sales << endl;

        cout << " Commisson Rate: " << commissionRate << endl;
		cout << " Commission: $" << commission << endl;
		cout << " Advanced Pay: $" << advancedPay << endl;

		if (remainingPay >= 0) {
			cout << "Remaining Pay: $" << remainingPay << endl;
        }
        else {
			cout << "The salesperson owes $" << -remainingPay << endl;
        }

		cout << "\nDo you want to calculate another salesperson? (Y/N): ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');

        return 0;

}
