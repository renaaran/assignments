#pragma once

#include "Account.h"

class Checking :
	public Account {
	float m_MinBalance;
public:
	Checking(const std::string &name, float balance, float minBalance);
	~Checking();
    void Withdraw(float amount) override;
    float GetMinimumBalance();
};