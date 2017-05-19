#include "Controle.h"

Controle::Controle()
{
}

Controle::~Controle()
{
}

void Controle::gerenciarExecucao() {
	InterfaceUsuario iu;

	int Opcao, Retorno1, Retorno2;

	do
	{
		Opcao = iu.exibirMenuPrincipal();

		switch (Opcao)
		{
		case 1:
			Retorno1 = iu.exibirMenuConceitos(); //Retorno chama o metodo de conceito
			Retorno1 = iu.selecionarDificuldade();
			break;

		case 2:
			 Retorno2 = iu.exibirMenuExercicios(); //Retorno chama o metodo de exercicios
			 Retorno2 = iu.selecionarDificuldade();
			break;

		case 3:
			cout << "\nObrigado!" << endl;
			break;
		}
	} while (Opcao != 3);
}