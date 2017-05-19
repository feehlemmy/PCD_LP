#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
//-------------------------------
#include <iostream>
using namespace std;
#include <string>
#include <locale.h>

class InterfaceUsuario
{
public:
	InterfaceUsuario();
	~InterfaceUsuario();

	int exibirMenuPrincipal(void);
	int exibirMenuConceitos(void);
	int exibirMenuExercicios(void);
	int selecionarDificuldade(void);


private:

};

//-------------------------------
#endif // !InterfaceUsuarioH

