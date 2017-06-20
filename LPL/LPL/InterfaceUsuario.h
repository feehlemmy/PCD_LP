#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
//-------------------------------
#include <iostream>
using namespace std;
#include <string>
#include <locale.h>
#include <fstream>

class InterfaceUsuario
{
public:
	InterfaceUsuario();
	~InterfaceUsuario();
	void exibirTelaApresentacao(void);
	int exibirMenuPrincipal(void);
	int exibirMenuConceitos(void);
	int exibirMenuExercicios(void);
	int selecionarDificuldade(int);
	void exibirConceito(int);
	int exibirExercicios(int);


private:

};

//-------------------------------
#endif // !InterfaceUsuarioH

