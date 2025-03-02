#include "Banking.h"
#include <iostream>
#include <iomanip>

using namespace std;

//Banking class definition

//Accessors and mutators
void Banking::SetInitialInvestment(double t_initialInvestment) {
	m_totalAmount = t_initialInvestment;
}

void Banking::SetMonthlyDeposit(double t_monthlyDeposit) {
	m_monthlyDeposit = t_monthlyDeposit;
}

void Banking::SetInterestRate(double t_annualInterest) {
	m_yearlyTotalInterest = t_annualInterest;
}

void Banking::SetNumberOfYears(int t_numberOfYears) {
	m_numberOfYears = t_numberOfYears;
}

double Banking::GetInitialInvestment() const {
	return m_totalAmount;
}

double Banking::GetMonthlyDeposit() const {
	return m_monthlyDeposit;
}

double Banking::GetInterestRate() const {
	return m_yearlyTotalInterest;
}

int Banking::GetNumberOfYears() const {
	return m_numberOfYears;
}

//Function for balance without deposit
double Banking:: calcBalanceWithoutMonthlyDeposit(double t_initialInvestment, double t_annualInterest, int t_numberOfYears) {
	m_totalAmount = t_initialInvestment;
}

//Display table heading
cout << endl << "     Balance and Interest Without Additional Monthly Deposits" << endl;
cout << std::string(66, '=') << endl;
cout << "Year        Year End Balance        year End Earned Interest" << endl;
cout << sted::string(66, '-') << endl;

//Calculate yearly interest and year end total
for (int i = 0; i < t_numberOfYears; i++) {
	m_interestAmount = m_totalAmount * (t_annualInterest / 100);
	m_total amount = m_totalAmount + m_interestAmount;
	cout << " " << left << setw(5) << (i + 1) << "t/t$" << fixed << setprecision(2) << m_totalAmount << "\t\t\t\t$" << m_interestAmount << endl;
}

return m_totalAmount;
}

//Function to calculate and output balance with monthly deposit
double Banking::balanceWithMonthlyDeposit(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest, int t_numberOfYears) {
	m_totalAmount = t_initialInvestment;

	//Display table heading
	cout << endl << "      Balance and Interst with Additional Monthly Deposits" << endl;
	cout << std::string(66, '=') << endl;
	cout << "Year      Year End Balance      Year End Earned Interest" << endl;
	cout << std::string(66, '-') << endl;

	//Calculate yearly interest and year end total
	for (int i = 0; i < t_numberOfYears; i++) {
		m_yearlyTotalInterest = 0;

		for (int j = 0; j < 12; j++) {
			m_interestAmount = (m_totalAmount + t_monthlyDeposit) * ((t_annualInterest / 100.00) / 12.00);
			m_yearlyTotalInterest = m_yearlyTotalInterest + m_interestAmount;
			m_totalAmount = m_totalAmount + t_monthlyDeposit + m_interestAmount;
		}

		cout << " " << left << setw(5) << (i + 1) << "\t\t$" << fixed << setprecision(2) << m_totalAmount << "\t\t\t\t$" << m_yearlyTotalInterest << endl;
	}

	return m_totalAmount;
}


