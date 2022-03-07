#include <iostream>

#include <conio.h>
#include "conta.h"

using namespace std;

int main()
{
    float saldo_original = 0;
    float valor_deposito;
    float valor_saque;
    char opcao;
    bool continua = true;

    Conta conta1(saldo_original);

    do
    {
        cout << "\nD - DEPOSITAR VALOR\n";
        cout << "S - SACAR VALOR\n";
        cout << "E - SALDO ATUAL\n";
        cout << "X - SAIR\n\n";
        opcao = toupper(_getche());

        switch (opcao)
        {
        case 'D':
            cout << "\nINFORME O VALOR A SER DEPOSITADO: ";
            cin >> valor_deposito;
            conta1.deposito(valor_deposito);
            cout << "SEU NOVO SALDO E R$ " << conta1.get_saldo() << "\n";
            break;

        case 'S':
            cout << "\n INFORME O VALOR A SACAR: ";
            cin >> valor_saque;
            if (valor_saque <= 0)
                cout << "VALOR DE SAQUE NAO PODE SER NULO OU NEGATIVO!";
            else
            {
                if (valor_saque > conta1.get_saldo())
                {
                    cout << "\nSALDO INSUFICIENTE!\n";
                    break;
                }
                else
                    conta1.saque(valor_saque);
            }

        case 'E':
            cout << " SEU SALDO ATUAL R$ " << conta1.get_saldo() << "\n";
            break;

        case 'X':
            continua = false;
            break;
        }
    } while (continua == true);

    return EXIT_SUCCESS;
}
