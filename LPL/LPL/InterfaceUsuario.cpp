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

			}else{
				cout << "\nOpcao Invalida! Informe valores de 1 a 3." << endl;
				system("pause");
				continue;
			}
		

	}
	return Opcao;
}

int InterfaceUsuario::exibirMenuConceitos(){
	int Opcao = 0;

	while (Opcao != 3)
	{
		system("cls");
		cout << "============== Menu Conceitos ==============" << endl;
		cout << "\n1- Vari�veis e Constantes" << endl;
		cout << "\n2- Estruturas de Sele��o" << endl;
		cout << "\n3- Estruturas de Repeti��o" << endl;
		cout << "\n4- Retornar" << endl;
		cout << "\nOpcao: ";
		cin >> Opcao;
		if ((Opcao >= 1) && (Opcao <= 4))
		{
			break;
		}
		else {
			cout << "\nOpcao Invalida! Informe valores de 1 a 3." << endl;
			system("pause");
			continue;
		}
	}
	return Opcao;
}
	
int InterfaceUsuario::exibirMenuExercicios(){
	int Opcao = 0;

	while (Opcao != 4)
	{
		system("cls");
		cout << "============== Menu Exerc�cios ==============" << endl;
		cout << "\n1- Vari�veis e Constantes" << endl;
		cout << "\n2- Estruturas de Sele��o" << endl;
		cout << "\n3- Estruturas de Repeti��o" << endl;
		cout << "\n4- Retornar" << endl;

		cout << "\nOpcao: ";
		cin >> Opcao;



		if ((Opcao >= 1) && (Opcao <= 4))
		{
			break;
		}
		else {
			cout << "\nOpcao Invalida! Informe valores de 1 a 3." << endl;
			system("pause");
			continue;
		}
	}
	return Opcao;
}

int InterfaceUsuario::selecionarDificuldade(){
	int Opcao = 0;

	while (Opcao != 4)
	{
		system("cls");
		cout << "============== Selecione a Dificuldade ==============" << endl;
		cout << "\n1- Basico" << endl;
		cout << "\n2- Intermediario" << endl;
		cout << "\n3- Avan�ado" << endl;
		cout << "\n4- Retornar" << endl;

		cout << "\nOpcao: ";
		cin >> Opcao;


		if ((Opcao >= 1) && (Opcao <= 4))
		{
			break;
		}
		else {
			cout << "\nOpcao Invalida! Informe valores de 1 a 3." << endl;
			system("pause");
			continue;
		}
	}
	return Opcao;
}