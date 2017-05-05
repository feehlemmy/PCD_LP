#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
}

InterfaceUsuario::~InterfaceUsuario()
{
}

int InterfaceUsuario::exibirMenuPrincipal(void) {
	int Opcao;

	while (true)
	{
		system("cls");
		cout << "============== Menu Principal ==============" << endl;
		cout << "\n1- Conceitos" << endl;
		cout << "\n2- Exercicios" << endl;
		cout << "\n3- Encerrar" << endl;
		cout << "\nOpcao: ";
		cin >> Opcao;

		if ((Opcao >= 1) && (Opcao <= 3))
		{
			break;
		}
		else
		{
			cout << "\nOpcao Invalida! Informe valores de 1 a 3." << endl;
			system("pause");
			continue;
		}
	}

	return Opcao;
}