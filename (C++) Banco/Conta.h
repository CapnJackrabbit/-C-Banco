#pragma once
#include <iostream>
using namespace std;

class Conta
{
public:
	Conta(float saldo)                               // CONSTRUTOR
	{
		set_saldo(saldo);
	}

	void set_saldo(float saldo)						// SETTER: SALDO
	{
		this->saldo_eff = saldo;
	}

	float get_saldo()								// GETTER: SALDO
	{
		return saldo_eff;
	}

	void deposito(float valor_deposito)
	{
		if (valor_deposito <= 0)
			cout << "VALOR DO DEPOSITO NAO PODE SER NULO OU NEGATIVO!\n";
		else
			this->saldo_eff += valor_deposito;
	}

	void saque(float valor_saque)
	{
		if (valor_saque > saldo_eff)
			cout << "SALDO INSUFICIENTE!\n";
		else
			this->saldo_eff -= valor_saque;
	}


private:
	float saldo_eff;
};



