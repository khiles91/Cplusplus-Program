#pragma once
#ifndef Banking.h
#define Banking.h


//Banking class declaration
class Banking {
public:
	void SetInitialInvestment(double t_initialInvestment);
	void SetMonthlyDeposit(double t_monthlyDeposit);
	void SetNumberOfYears(int t_numberOfYears);
	double GetInitialInvestment() const;
	double GetMonthlyDeposit() const;
	double GetInterestRate() const;
	int GetNumberOfYears() const;
	double calcBalanceWithoutMonthlyDeposit(double t_initialInvestment, double t_annualInterest, int t_numberOfYears);
	double balanceWithMonthlyDeposit(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterest, int t_numberOfYears);

private:
	double m_totalAmount;
	double m_interestAmount;
	double m_yearlyTotalInterest;
	double m_monthlyDeposit;
	double m_numberOfYears;
};

#endif

