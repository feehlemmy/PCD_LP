#include "Controle.h"

int main(int argv, char *argc[]) {
	setlocale(LC_ALL, "");
	
	Controle controle;

	controle.gerenciarExecucao();

	return 0;
}