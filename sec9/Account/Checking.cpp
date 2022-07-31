#include "Checking.h"
#include <iostream>

Checking::Checking(const std::string & name, float balance, float minBalance): Account(name, balance), m_MinBalance(minBalance) {
	std::cout << "Checking" << std::endl;
}

Checking::~Checking() {
	std::cout << "~Checking" << std::endl;
}

float Checking::GetMinimumBalance() {
    return m_MinBalance;
}

void Checking::Withdraw(float amount) {
	/*
	Balance should be greater than 0 & the amount
	to withdraw should be less than balance
	*/
	if (amount < m_Balance && (m_Balance-amount) >= m_MinBalance)
		m_Balance -= amount;
	else {
		//Throw an exception instead of printing a message
		//std::cout << "Insufficient balance" << std::endl;
		throw std::runtime_error("Insufficient balance!");
	}
}