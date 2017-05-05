#include "Controle.h"

Controle::Controle()
{
}

Controle::~Controle()
{
}

void Controle::gerenciarExecucao() {
	InterfaceUsuario iu;

	int Opcao, Retorno;

	do
	{
		Opcao = iu.exibirMenuPrincipal();

		switch (Opcao)
		{
		case 1:
			//Retorno chama o metodo de conceito
			break;

		case 2:
			//Retorno chama o metodo de exercicios
			break;

		case 3:
			cout << "\nObrigado!" << endl;
			break;
		}
	} while (Opcao != 3);
}