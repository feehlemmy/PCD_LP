#include "InterfaceUsuario.h"
#include <fstream>


InterfaceUsuario::InterfaceUsuario()
{
}

InterfaceUsuario::~InterfaceUsuario()
{
}
void InterfaceUsuario::exibirTelaApresentacao(){
	std::ifstream ifs("Tela_Apresentacao.txt", std::ifstream::binary);
	std::filebuf* pbuf = ifs.rdbuf();
	std::size_t size = pbuf->pubseekoff(0, ifs.end, ifs.in);
	pbuf->pubseekpos(0, ifs.in);
	char* buffer = new char[size];
	pbuf->sgetn(buffer, size);
	ifs.close();
	std::cout.write(buffer, size);
	delete[] buffer;
	system("pause");
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

	while (Opcao != 4)
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
		}else{
			cout << "\nOpcao Invalida! Informe valores de 1 a 4." << endl;
			system("pause");
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


		if ((Opcao >= 1)&& (Opcao <=4)){

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

void InterfaceUsuario::exibirConceito(int Retorno1){
	 
	int Opcao, Controlador;
	Opcao = Retorno1;
	system("cls");
	
	if (Opcao == 1){
		std::ifstream ifs("Constantes_Variaveis.txt", std::ifstream::binary);
		std::filebuf* pbuf = ifs.rdbuf();
		std::size_t size = pbuf->pubseekoff(0, ifs.end, ifs.in);
		pbuf->pubseekpos(0, ifs.in);
		char* buffer = new char[size];
		pbuf->sgetn(buffer, size);
		ifs.close();
		std::cout.write(buffer, size);
		delete[] buffer;
	}
	Controlador = 1;

	if(Opcao == 2){
		if (Controlador == 1)
		{
			    std::ifstream ifs("Constantes_Variaveis_Algoritmos.txt", std::ifstream::binary);
				std::filebuf* pbuf = ifs.rdbuf();
				std::size_t size = pbuf->pubseekoff(0, ifs.end, ifs.in);
				pbuf->pubseekpos(0, ifs.in);
				char* buffer = new char[size];
				pbuf->sgetn(buffer, size);
				ifs.close();
				std::cout.write(buffer, size);
				delete[] buffer;
				system("pause");
				Controlador = 2;
			}
			 if(Controlador ==2) {
				std::ifstream ifs("Constantes_Variaveis_Algoritmos1.txt", std::ifstream::binary);
				std::filebuf* pbuf = ifs.rdbuf();
				std::size_t size = pbuf->pubseekoff(0, ifs.end, ifs.in);
				pbuf->pubseekpos(0, ifs.in);
				char* buffer = new char[size];
				pbuf->sgetn(buffer, size);
				ifs.close();
				std::cout.write(buffer, size);
				delete[] buffer;
				
			}
			
		
	}
	system("pause");
}
int InterfaceUsuario::exibirExercicios(int Retorno2){
	system("cls");
	int Opcao = Retorno2,Pontos = 0;
	int Resposta;

	switch (Opcao)
	{
	case 1: 
		cout << "Qual a Diferen�a entre Vari�veis e Constantes?" << endl;
		cout << "1) A constante ao ser declarada precisa informar seu tipo Vari�vel n�o." << endl;
		cout << "2)A Vari�vel pode ter seu Valor alterado pelo Usuario e a Constante n�o." << endl;
		cout << "3)Constante ocupa maior espa�o na mem�ria que qualquer tipo de Vari�vel." << endl;
		cout << "Digite sua resposta: ";
		cin >> Resposta;
		switch (Resposta)
		{
		case 1:
			cout << "Resposta Errada" << endl;
			system("pause");

			break;
		case 2:
			cout << "Resposta Certa" << endl;
			Pontos++;
			system("pause");
			break;
		case 3:
			cout << "Resposta Errada" << endl;
			system("pause"); 
			break;
		}
		cout << "Quando se deve usar uma V�riavel do tipo Inteiro?" << endl;
		cout << "1)Ao ser necess�rio ler um valor Real." << endl;
		cout << "2)Ao ser necessa�rio ler uma letra do Alfabeto." << endl;
		cout << "3)Ao ser necess�rio ler um Numero sem parte fracionaria." << endl;
		cout << "Digite sua resposta: ";
		cin >> Resposta;

		switch (Resposta)
		{
		case 1:
			cout << "Resposta Errada" << endl;
			system("pause");

			break;
		case 3:
			cout << "Resposta Certa" << endl;
			Pontos++;
			system("pause");
			break;
		case 2:
			cout << "Resposta Errada" << endl;
			system("pause");
			break;
		}

		break;
	}
	
	cout <<"Sua pontua��o no n�vel b�sico sobre Vari�veis e Constantes �: "<< Pontos << endl;
	system("pause");
	return Pontos;

}