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
	int selecionarDificuldade(void);
	void exibirConceito(int);


private:

};

//-------------------------------
#endif // !InterfaceUsuarioH

