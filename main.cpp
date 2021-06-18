#include <iostream>

#include "Controler.h"
#include "Local.h"
#include "Menu.h"

using namespace std;

int main() {
	int opcao, opcaoCons, opcaoLoc, opTrans;
	shared_ptr<Controler> t(make_shared<Controler>());
  // insere os já salvos 
	do {
    
		Menu::exibeMenuPrincipal();
		cin >> opcao;
		system("clear");
		switch (opcao) {
		case 0:
			break;

		case 1:
			t->cadastraInsumosMS();
			break; // break do primeiro switch case// case 1;

		case 2:
			do {
				do // impede opções invalidas
				{
					// vai mostrar os locais disponíveis para consulta
					Menu::exibeMenuConsulta(); 
					cin >> opcaoLoc;
					system("clear");
				} while (opcaoLoc < 0 || opcaoLoc > 28);
				if (opcaoLoc >= 0) {
					opcaoLoc--;
				} // para manter o padrão de sair faz com que pra sair o usuario
				  // digite 0;
				if (opcaoLoc == -1) {
					break;
				} // faz o loop parar e retorna ao menu

				do // impede opções invalidas
				{
					// mostra o menu de tipos de consulta disponíveis
					Menu::exibeMenuConsultaEstoque(); 
					cin >> opcaoCons;
					system("clear");
				} while (opcaoCons < 0 || opcaoCons > 2);

				switch (opcaoCons) {
				case 1:
					t->consultaInsumos(t->getLocais(opcaoLoc)); // faz a consulta dos insumos sem descricao
					Menu::exibeRodape();
					break;

				case 2:
					t->consultaInsumosDescricao(t->getLocais(opcaoLoc)); // faz a consulta dos insumos com descricao/
					Menu::exibeRodape();
					break;

				default:
					break;
				}

			} while (true);
			break; // break do primeiro switch case// case 2;

		case 3:
			// terminando a distribuição
			do {
				if (t->getLocais(0).getInsumo().size() == 0) {
					cout << "Não há insumos disponíveis!" << endl;
					break;
				}
				do // impede opções invalidas
				{
					// vai mostrar os locais para onde pode distribuir e faz a
					// leitura
					Menu::exibeMenuDistribuicao();
					cin >> opcaoLoc;
					system("clear");
				} while (opcaoLoc < 0 || opcaoLoc > 28 || opcaoLoc == 1);

				// para manter o padrão de sair faz com que pra sair o usuario
				// digite 0;
				if (opcaoLoc >= 1) {
					opcaoLoc--;
				}

				// cout << "Opcao loc = " <<  opcaoLoc << endl;
				// faz o loop parar e retorna ao menu
				if (opcaoLoc == -1) {
					break;
				}

				cout << "Insumos disponíveis para transferência: " << endl;
				t->consultaInsumos(t->getLocais(0));

				do {
					cout << "Insira o índice do insumo a ser transferido: ";
					cin >> opTrans;
				} while (opTrans > t->getLocais(0).getInsumo().size() ||
						 opTrans <= 0);

				t->distribuirInsumo(
					opcaoLoc, t->getLocais(0).getInsumo()[opTrans - 1]);

				break;

			} while (true);
			break; // break do primeiro switch case// case 3;
		default:
			cout << "Opção inválida, tente novamente!" << endl;
			// sleep(3);
			break;
		}
	} while (opcao != 0);

	return 0;
}