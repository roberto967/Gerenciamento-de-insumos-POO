#include "Menu.h"
#include "Controler.h"

using namespace std;

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::exibeMenu2()
{

}

//tá pronto
void Menu::exibeMenuPrincipal()
{
  cout << "=====================================================" << endl;
  cout << "|               Ministério da Saúde (MS)            |" << endl;
  cout << "|        Gerenciamento e Distribuição de Insumos    |" << endl;
  cout << "|                    MENU PRINCIPAL                 |" << endl;
  cout << "=====================================================" << endl;
  cout << "|  1 - Cadastro de Insumos - Estoque (MS)           |" << endl;
  cout << "|  2 - Consulta de Insumos                          |" << endl;
  cout << "|  3 - Distribuição de Insumos                      |" << endl;
  cout << "|  0 - Sair                                         |" << endl;
  cout << "=====================================================" << endl;
  cout << "Insira uma opção: ";
}

//tá pronto
void Menu::cabecalhoCadastro(int tipoInsumo)
{
  string tInsumo;
  switch(tipoInsumo)
  {
    case 1:
      tInsumo = "VACINA";
      break;
    case 2:
      tInsumo = "MEDICAMENTO";
    break;
    case 3:
      tInsumo = "EPI";
      break;
  }
  cout << "=====================================================" << endl;
  cout << "|               Ministério da Saúde (MS)            |" << endl;
  cout << "|       Gerenciamento e Distribuição de Insumos     |" << endl;
  cout << "         CADASTRO DE " << tInsumo << " - ESTOQUE (MS)         " << endl;
  cout << "=====================================================" << endl;
}

//tá pronto
void Menu::exibeMenuCadastro()
{ 
  cout << "=====================================================" << endl;
  cout << "|               Ministério da Saúde (MS)            |" << endl;
  cout << "|       Gerenciamento e Distribuição de Insumos     |" << endl;
  cout << "|          CADASTRO DE INSUMOS - ESTOQUE (MS)       |" << endl;
  cout << "=====================================================" << endl;
  cout << "|  1 - Cadastro de Vacinas                          |" << endl;
  cout << "|  2 - Cadastro de Medicamentos                     |" << endl;
  cout << "|  3 - Cadastro de EPI's                            |" << endl;
  cout << "|  0 - Menu principal                               |" << endl;
  cout << "=====================================================" << endl;
  cout << "Insira uma opção: ";
}
//pronto
void Menu::exibeCabecalhoSimples(int tipoInsumo)
{ 
  string tInsumo;
  switch(tipoInsumo)
  {
    case 1:
      tInsumo = "VACINA";
      break;
    case 2:
      tInsumo = "MEDICAMENTOS";
    break;
    case 3:
      tInsumo = "EPI";
      break;
  }
  cout << "=====================================================" << endl;
  cout << "                   " << tInsumo << "                    " << endl;
  cout << "=====================================================" << endl;
}

//pronto
void Menu::exibeMenuConsulta()
{
  cout << "=====================================================" << endl;
  cout << "|              Ministério da Saúde (MS)             |" << endl;
  cout << "|      Gerenciamento e Distribuição de Insumos      |" << endl;
  cout << "|     CONSULTA DE INSUMOS - UNIDADES FEDERATIVAS    |" << endl;
  cout << "=====================================================" << endl;
  cout << "| 2 - RO - Rondônia   | 16 - SE - Sergipe           |" << endl;
  cout << "| 3 - AC - Acre       | 17 - BA - Bahia             |" << endl;
  cout << "| 4 - AM - Amazonas   | 18 - MG - Minas Gerais      |" << endl;
  cout << "| 5 - RR - Roraima    | 19 - ES - Espírito Santo    |" << endl;
  cout << "| 6 - PA - Pará       | 20 - RJ - Rio de Janeiro    |" << endl;
  cout << "| 7 - AP - Amapá      | 21 - SP - São Paulo         |" << endl;
  cout << "| 8 - TO - Tocantins  | 22 - PR - Paraná            |" << endl;
  cout << "| 9 - MA - Maranhão   | 23 - SC - Santa Catarina    |" << endl;
  cout << "| 10 - PI - Piauí     | 24 - RS - Rio Grande do Sul |" << endl;
  cout << "| 11 - CE - Ceará     | 25 - MS - Mato Grosso do Sul|" << endl;
  cout << "| 12 - RN - Rio Grande do Norte                     |" << endl;
  cout << "| 13 - PB - Paraíba   | 26 - MT - Mato Grosso       |" << endl;
  cout << "| 14 - PE - Pernambuco| 27 - GO - Goiás             |" << endl;
  cout << "| 15 - AL - Alagoas   | 28 - DF - Distrito Federal  |" << endl;
  cout << "|---------------------------------------------------|" << endl;
  cout << "| 0 - Menu principal  | 1 - Ministerio da Saúde     |" << endl;
  cout << "=====================================================" << endl;
  cout << "Insira uma opção: ";
          
          /*cout << "=====================================================" << endl;
          cout << "|              Ministério da Saúde (MS)             |" << endl;
          cout << "|      Gerenciamento e Distribuição de Insumos      |" << endl;
          cout << "|     CONSULTA DE INSUMOS - UNIDADES FEDERATIVAS    |" << endl;
          cout << "=====================================================" << endl;
          cout << "| 11 - RO - Rondônia  | 28 - SE - Sergipe           |" << endl;
          cout << "| 12 - AC - Acre      | 29 - BA - Bahia             |" << endl;
          cout << "| 13 - AM - Amazonas  | 31 - MG - Minas Gerais      |" << endl;
          cout << "| 14 - RR - Roraima   | 32 - ES - Espírito Santo    |" << endl;
          cout << "| 15 - PA - Pará      | 33 - RJ - Rio de Janeiro    |" << endl;
          cout << "| 16 - AP - Amapá     | 35 - SP - São Paulo         |" << endl;
          cout << "| 17 - TO - Tocantins | 41 - PR - Paraná            |" << endl;
          cout << "| 21 - MA - Maranhão  | 42 - SC - Santa Catarina    |" << endl;
          cout << "| 22 - PI - Piauí     | 43 - RS - Rio Grande do Sul |" << endl;
          cout << "| 23 - CE - Ceará     | 50 - MS - Mato Grosso do Sul|" << endl;
          cout << "| 24 - RN - Rio Grande do Norte                     |" << endl;
          cout << "| 25 - PB - Paraíba   | 51 - MT - Mato Grosso       |" << endl;
          cout << "| 26 - PE - Pernambuco| 52 - GO - Goiás             |" << endl;
          cout << "| 27 - AL - Alagoas   | 53 - DF - Distrito Federal  |" << endl;
          cout << "|---------------------------------------------------|" << endl;
          cout << "| 0 - Menu principal  | 1 - Ministerio da Saúde     |" << endl;
          cout << "=====================================================" << endl;*/
}

//pronto
void Menu::exibeMenuConsultaEstoque()
{
  cout << "=====================================================" << endl;
  cout << "|       Gerenciamento e Distribuição de Insumos     |" << endl;
  cout << "|                 CONSULTA DE INSUMOS               |" << endl;
  cout << "=====================================================" << endl;
  cout << "|  1 - Insumos disponíveis                          |" << endl;
  cout << "|  2 - Descrição dos insumos                        |" << endl;
  cout << "|  0 - Voltar                                       |" << endl;
  cout << "=====================================================" << endl;
  cout << "Insira uma opção: ";
}
void Menu::exibeRodape()
{
  cout << "=====================================================" << endl;
  cout << "|                         FIM                       |" << endl;
  cout << "=====================================================" << endl;
  // acho que nao é tem muita utilidade, tendo em vista que sempre fica em loop pra consulta ou até mesmo pra cadastro
  /*cout << "|  1 - Voltar                                       |" << endl;
  cout << "|  0 - Menu principal                               |" << endl;
  cout << "=====================================================" << endl;
  cout << "Insira uma opção:";*/
}

void Menu::exibeMenuDistribuicao()
{
  cout << "=====================================================" << endl;
  cout << "|              Ministério da Saúde (MS)             |" << endl;
  cout << "|      Gerenciamento e Distribuição de Insumos      |" << endl;
  cout << "|   Distribuição de Insumos - UNIDADES FEDERATIVAS  |" << endl;
  cout << "=====================================================" << endl;
  cout << "| 2 - RO - Rondônia   | 16 - SE - Sergipe           |" << endl;
  cout << "| 3 - AC - Acre       | 17 - BA - Bahia             |" << endl;
  cout << "| 4 - AM - Amazonas   | 18 - MG - Minas Gerais      |" << endl;
  cout << "| 5 - RR - Roraima    | 19 - ES - Espírito Santo    |" << endl;
  cout << "| 6 - PA - Pará       | 20 - RJ - Rio de Janeiro    |" << endl;
  cout << "| 7 - AP - Amapá      | 21 - SP - São Paulo         |" << endl;
  cout << "| 8 - TO - Tocantins  | 22 - PR - Paraná            |" << endl;
  cout << "| 9 - MA - Maranhão   | 23 - SC - Santa Catarina    |" << endl;
  cout << "| 10 - PI - Piauí     | 24 - RS - Rio Grande do Sul |" << endl;
  cout << "| 11 - CE - Ceará     | 25 - MS - Mato Grosso do Sul|" << endl;
  cout << "| 12 - RN - Rio Grande do Norte                     |" << endl;
  cout << "| 13 - PB - Paraíba   | 26 - MT - Mato Grosso       |" << endl;
  cout << "| 14 - PE - Pernambuco| 27 - GO - Goiás             |" << endl;
  cout << "| 15 - AL - Alagoas   | 28 - DF - Distrito Federal  |" << endl;
  cout << "|---------------------------------------------------|" << endl;
  cout << "|                0 - Menu principal                 |" << endl;
  cout << "=====================================================" << endl;
  cout << "Insira a opção de destino: ";
}
/*
// pronto
void Menu::exibeMenuConsultaEstoqueUFs(int tcon)
{
  string TiCon;
  switch(tcon){
    case 1:
      TiCon = "GERAL";
      break;
    case 2:
      TiCon = "POR UF";
    break;
  }
  cout << "=====================================================" << endl;
  cout << "               Ministério da Saúde (MS)              " << endl;
  cout << "       Gerenciamento e Distribuição de Insumos       " << endl;
  cout << "     CONSULTA DE INSUMOS - ESTOQUES FEDERATIVOS      " << endl;
  cout << "=====================================================" << endl; 
  cout << "                     "<< TiCon <<"                   " << endl; 
  cout << "=====================================================" << endl; 
  cout << "  1 - Insumos Distribuídos                           " << endl;
  cout << "  2 - Descrição dos Insumos Distribuídos             " << endl;
  cout << "  3 - Descrição dos Insumos Distribuídos - (Por tipo)" << endl;
  cout << "  0 - Menu principal                                 " << endl;
  cout << "=====================================================" << endl;
}

// pronto
void Menu::exibeMenuTipoConsultaEstoqueUFs()
{
  cout << "=====================================================" << endl;
  cout << "               Ministério da Saúde (MS)              " << endl;
  cout << "       Gerenciamento e Distribuição de Insumos       " << endl;
  cout << "      CONSULTA DE INSUMOS - ESTOQUES FEDERATIVOS     " << endl;
  cout << "=====================================================" << endl;  
  cout << "  1 - Geral                                          " << endl;
  cout << "  2 - Por Unidade Federativa                         " << endl;
  cout << "  0 - Menu principal                                 " << endl;
  cout << "=====================================================" << endl;
}


void Cabecalho::exibeCabecalhoUFsV()
{
  
  cout << "=====================================================" << endl;
  cout << "                      VACINAS ("<< uf[x]<<")                   " << endl;
  cout << "=====================================================" << endl;
}

*/