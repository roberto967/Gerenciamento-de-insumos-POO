
/* Um método que cadastra insumos no estoque do MS (vacinas, medicamentos e
EPIs); 99.9% concluido

• Um método que consulta os insumos disponíveis no estoque do MS ou de algum
Estado; 70% concluido 

• Um método que consulta a descrição dos insumos disponíveis no estoque do MS ou
de algum estado (incluindo informações sobre os seus atributos); 70% concluido 

• Um método que retorna todos os insumos disponíveis no estoque do MS ou de
algum estado, por tipo (vacina, medicamentos e EPIs); ~> nao pedia isso na
descrição do projeto. mas a gente pode tentar quando terminar esse.

• Um método que entrega/distribui um determinado tipo de insumo para um
determinado estado (nesse caso, o estado deve ser passado como parâmetro da
função, bem como o tipo de insumo). Você deve também debitar aquele insumo do
estoque do MS e creditá-lo no estoque daquele estado; -> a definir, vai ser
baseado no do projeto passado
*/

#include <iostream>

#include "Controler.h"
#include "Local.h"
#include "Menu.h"
#include "Persistencia.h"

using namespace std;

// acho que ia ficar muito bagunçado com a questao dos codigos do ibge, assim da uma simplificada e evitou aquele bug do nas consultas

int main() {
	int opcao, opcaoCons, opcaoLoc;
	Controler *t = new Controler;

	do {
		Menu::exibeMenuPrincipal();
		cin >> opcao;
		system("clear");

		switch (opcao) {
			case 0:
				break;

			case 1:
				t->cadastraInsumosMS();
				break;

			case 2:
				do{
					do// impede opções invalidas
					{
						Menu::exibeMenuConsulta(); // vai mostrar os locais que podem ser consultados e fazer a leitura
						cin >> opcaoLoc;
            system("clear");
					}while (opcaoLoc < 0 || opcaoLoc > 28);
					if(opcaoLoc >= 0) { opcaoLoc--; } // para manter o padrão de sair faz com que pra sair o usuario digite 0;
					if (opcaoLoc == -1) { break;} // faz o loop parar e retorna ao menu 
					
					//cout << "Opcao loc = " <<  opcaoLoc << endl;
					do // impede opções invalidas
					{
						Menu::exibeMenuConsultaEstoque();// mostra o menu das opcoes com ou sem descricao e vai ver se a consulta vai ser com ou sem descricao.
						cin >> opcaoCons;
            system("clear");
					}while (opcaoCons < 0 || opcaoCons > 1);

					switch (opcaoCons)
					{
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

				}while (true);
				break;
			case 3: 
      // terminando a distribuição
      do// impede opções invalidas
					{
						 // vai mostrar os locais para onde pode distribuir e faz a leitura
            Menu::exibeMenuDistribuicao();
						cin >> opcaoLoc;
            system("clear");
					}while (opcaoLoc < 0 || opcaoLoc > 28);
          
          // para manter o padrão de sair faz com que pra sair o usuario digite 0;
					if(opcaoLoc >= 0) { opcaoLoc--; } 

          // faz o loop parar e retorna ao menu 	
          if (opcaoLoc == -1) { break;} 
				// t->distribuirInsumo()
        
				break;

			default:
				cout << "Opção inválida." << endl;
				break;
		}

	} while (opcao != 0);

	return 0;
}