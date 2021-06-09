#include "Controler.h"
#include <stdlib.h>
#include <locale>
#include <string>

using namespace std;

Controler::Controler()
{
  locais[0].setNomeAndTipo("Ministerio da Saúde",01);
  locais[1].setNomeAndTipo("RO", 11);
  locais[2].setNomeAndTipo("AC", 12);
  locais[3].setNomeAndTipo("AM", 13);
  locais[4].setNomeAndTipo("RR", 14);
  locais[5].setNomeAndTipo("PA", 15);
  locais[6].setNomeAndTipo("AP", 16);
  locais[7].setNomeAndTipo("TO", 17);
  locais[8].setNomeAndTipo("MA", 21);
  locais[9].setNomeAndTipo("PI", 22);
  locais[10].setNomeAndTipo("CE", 23);
  locais[11].setNomeAndTipo("RN", 24);
  locais[12].setNomeAndTipo("PB", 25);
  locais[13].setNomeAndTipo("PE", 26);
  locais[14].setNomeAndTipo("AL", 27);
  locais[15].setNomeAndTipo("SE", 28);
  locais[16].setNomeAndTipo("BA", 29);
  locais[17].setNomeAndTipo("MG", 31);
  locais[18].setNomeAndTipo("ES", 32);
  locais[19].setNomeAndTipo("RJ", 33);
  locais[20].setNomeAndTipo("SP", 35);
  locais[21].setNomeAndTipo("PR", 41);
  locais[22].setNomeAndTipo("SC", 42);
  locais[23].setNomeAndTipo("RS", 43);
  locais[24].setNomeAndTipo("MS", 50);
  locais[25].setNomeAndTipo("MT", 51);
  locais[26].setNomeAndTipo("GO", 52);
  locais[27].setNomeAndTipo("DF", 53);
}

Controler::~Controler()
{
}

Local Controler::getLocais(int n)
{ 
  return locais[n];
}

//Tá pronta
void Controler::cadastraInsumosMS()
{  
  //variaveis de cadastro comuns a todos os insumos
  int _tipoInsumo;
  do
  {
    //exibe o menu de cadastro e vai ler o tipo de insumo;
    do
    {
      Menu::exibeMenuCadastro();
      cin >> _tipoInsumo;
      cin.ignore();

      system("clear");
      
      // Garante que a escolha do usuario esteja nas possibilidades propostas.

      if(_tipoInsumo < 0 || _tipoInsumo > 3){
        cout << "Opção invalida, tente novamente!" << endl;
      }

    }while (_tipoInsumo < 0 || _tipoInsumo > 3);
    
  
    if(_tipoInsumo == 0) break;
    
    Menu::cabecalhoCadastro(_tipoInsumo);

    string _nome;
    int _quantidade;
    string _valorUnitario;
    string _dtVencimento;
    string _nomeFabricante;
    int _codLote;

    //vai cadastrar os campos comuns a todos os insumos.
    cout << "NOME: ";
    getline(cin, _nome);

    cout << "QUANTIDADE: ";
    cin >> _quantidade;
      
    cout << "VALOR UNITÁRIO: R$";
    cin >> _valorUnitario;
    cin.ignore();

    cout << "VALIDADE: ";
    getline(cin, _dtVencimento);

    cout << "FABRICANTE: ";
    getline(cin, _nomeFabricante);

    cout << "CÓD. DO LOTE: ";
    cin >> _codLote;

    locais[0].pushInsumo(_nome, _quantidade, _valorUnitario, _dtVencimento, _nomeFabricante, _tipoInsumo, _codLote);
    
    system("clear");
    cout << "Cadastro realizado com sucesso!" << endl;
    
  }while(_tipoInsumo !=0);
} 

void Controler::consultaInsumos(Local loc)
{ 
  locale loca;
 
  cout << "=====================================================" << endl;
  cout << "               Ministério da Saúde (MS)              " << endl;
  cout << "       Gerenciamento e Distribuição de Insumos       " << endl;
  cout << "     CONSULTA DE INSUMOS - " << loc.getNome() << endl;
  cout << "=====================================================" << endl; 

  if(consultaInsumos(loc, 1).size()){
    Menu::exibeCabecalhoSimples(1);
    for(int i = 0; i < consultaInsumos(loc, 1).size(); i++)
    {  
      cout << "NOME: ";
      //mostra o nome em maiusculo
      for(string::size_type j=0; j < consultaInsumos(loc, 1)[i]->getNome().length(); j++ ) 
      {
        cout << toupper(consultaInsumos(loc, 1)[i]->getNome()[j], loca);
      }
      cout << "                    | INDICE: " << i << endl;
      cout << "VALOR UNITÁRIO: " << consultaInsumos(loc, 1)[i]->getValorUnitario() << endl;
      cout << "QUANTIDADE: " << consultaInsumos(loc, 1)[i]->getQuantidade() << endl;
      cout << "VALIDADE: " << consultaInsumos(loc, 1)[i]->getDtVencimento() << endl;
      cout << "FABRICANTE: " << consultaInsumos(loc, 1)[i]->getNomeFabricante() << endl;
    }
  }

  if(consultaInsumos(loc, 2).size() > 0){
    Menu::exibeCabecalhoSimples(2);
    for(int i = 0; i< consultaInsumos(loc, 2).size(); i++)
    { 
      cout << "NOME: ";
      //mostra o nome em maiusculo
      for(string::size_type j=0; j < consultaInsumos(loc, 2)[i]->getNome().length(); j++ ) 
      {
        cout << toupper(consultaInsumos(loc, 2)[i]->getNome()[j], loca);
      }
      cout << "                    | INDICE: " << i << endl;
      cout << "VALOR UNITÁRIO: " << consultaInsumos(loc, 2)[i]->getValorUnitario() << endl;
      cout << "QUANTIDADE: " << consultaInsumos(loc, 2)[i]->getQuantidade() << endl;
      cout << "VALIDADE: " << consultaInsumos(loc, 2)[i]->getDtVencimento() << endl;
      cout << "FABRICANTE: " << consultaInsumos(loc, 2)[i]->getNomeFabricante() << endl;
    }
  }

  if(consultaInsumos(loc, 3).size() > 0){
    Menu::exibeCabecalhoSimples(3);
    for(int i = 0; i< consultaInsumos(loc, 3).size(); i++)
    { 
      cout << "NOME: ";
      //mostra o nome em maiusculo
      for(string::size_type j=0; j < consultaInsumos(loc, 3)[i]->getNome().length(); j++ ) 
      {
        cout << toupper(consultaInsumos(loc, 3)[i]->getNome()[j], loca);
      }
      cout << "                    | INDICE: " << i << endl;
      cout << "VALOR UNITÁRIO: " << consultaInsumos(loc, 3)[i]->getValorUnitario() << endl;
      cout << "QUANTIDADE: " << consultaInsumos(loc, 3)[i]->getQuantidade() << endl;
      cout << "VALIDADE: " << consultaInsumos(loc, 3)[i]->getDtVencimento() << endl;
      cout << "FABRICANTE: " << consultaInsumos(loc, 3)[i]->getNomeFabricante() << endl;
    }
  }
}

void Controler::consultaInsumosDescricao(Local loc)
{
  locale loca;
  int y;// saida do do{...}while
  do{
  cout << "=====================================================" << endl;
  cout << "               Ministério da Saúde (MS)              " << endl;
  cout << "       Gerenciamento e Distribuição de Insumos       " << endl;
  cout << "     CONSULTA DETALHADA DE INSUMOS - " << loc.getNome() << endl;
  cout << "=====================================================" << endl; 

  if(consultaInsumos(loc, 1).size()){
    Menu::exibeCabecalhoSimples(1);
    for(int i = 0; i < consultaInsumos(loc, 1).size(); i++)
    {  
      cout << "NOME: ";
      //mostra o nome em maiusculo
      for(string::size_type j=0; j < consultaInsumos(loc, 1)[i]->getNome().length(); j++ ) 
      {
        cout << toupper(consultaInsumos(loc, 1)[i]->getNome()[j], loca);
      }
      cout << "\n";
      cout << "VALOR UNITÁRIO: " << consultaInsumos(loc, 1)[i]->getValorUnitario() << endl;
      cout << "QUANTIDADE: " << consultaInsumos(loc, 1)[i]->getQuantidade() << endl;
      cout << "VALIDADE: " << consultaInsumos(loc, 1)[i]->getDtVencimento() << endl;
      cout << "FABRICANTE: " << consultaInsumos(loc, 1)[i]->getNomeFabricante() << endl;
      consultaInsumos(loc, 1)[i]->getCamposEspecificos();
    }
  }

  if(consultaInsumos(loc, 2).size()){
    Menu::exibeCabecalhoSimples(2);
    for(int i = 0; i< consultaInsumos(loc, 2).size(); i++)
    { 
      cout << "NOME: ";
      //mostra o nome em maiusculo
      for(string::size_type j=0; j < consultaInsumos(loc, 2)[i]->getNome().length(); j++ ) 
      {
        cout << toupper(consultaInsumos(loc, 2)[i]->getNome()[j], loca);
      }
      cout << "\n";
      cout << "VALOR UNITÁRIO: " << consultaInsumos(loc, 2)[i]->getValorUnitario() << endl;
      cout << "QUANTIDADE: " << consultaInsumos(loc, 2)[i]->getQuantidade() << endl;
      cout << "VALIDADE: " << consultaInsumos(loc, 2)[i]->getDtVencimento() << endl;
      cout << "FABRICANTE: " << consultaInsumos(loc, 2)[i]->getNomeFabricante() << endl;
      consultaInsumos(loc, 2)[i]->getCamposEspecificos();
    }
  }

  if(consultaInsumos(loc, 3).size()){
    Menu::exibeCabecalhoSimples(3);
    for(int i = 0; i< consultaInsumos(loc, 3).size(); i++)
    { 
      cout << "NOME: ";
      //mostra o nome em maiusculo
      for(string::size_type j=0; j < consultaInsumos(loc, 3)[i]->getNome().length(); j++ ) 
      {
        cout << toupper(consultaInsumos(loc, 3)[i]->getNome()[j], loca);
      }
      cout << "\n";
      cout << "VALOR UNITÁRIO: " << consultaInsumos(loc, 3)[i]->getValorUnitario() << endl;
      cout << "QUANTIDADE: " << consultaInsumos(loc, 3)[i]->getQuantidade() << endl;
      cout << "VALIDADE: " << consultaInsumos(loc, 3)[i]->getDtVencimento() << endl;
      cout << "FABRICANTE: " << consultaInsumos(loc, 3)[i]->getNomeFabricante() << endl;
      consultaInsumos(loc, 3)[i]->getCamposEspecificos();
    }
  }
  Menu::exibeRodape();
   cin >>y;
   if (y<0 ||y>1)
   cout<< "Opção invalida, tente novamente!"<< endl;
	} while (y!=0);
}

vector<shared_ptr<Insumos>> Controler::consultaInsumos(Local loc, int tipoInsumo)
{
  vector<shared_ptr<Insumos>> vetorInsumoEspe;

  for (int i = 0; i < loc.getInsumo().size(); i++)
  {
    if(loc.getInsumo()[i]->getTipoInsumo() == tipoInsumo){
      vetorInsumoEspe.emplace_back(loc.getInsumo()[i]);
    }
  }
  return vetorInsumoEspe;
}

void Controler::distribuirInsumo(int dest, shared_ptr<Insumos> insumo)
{ 
  int qtd;
  int id; // vai guardar a localização do insumo no array do MS;
  
  for(int i = 0; i < locais[0].getInsumo().size(); i++)
  {
    if(locais[0].getInsumo()[i] == insumo)
    {
      id = i;
      cout << "SAO IGUAIS!!" << endl;
      break;
    }
  }

  cout << "Insira a quantidade a ser transferida: ";
  cin >> qtd;
  insumo->setQuantidade(qtd);

  locais[dest].pushInsumo(insumo);

  /*
  for(int i = 0; i < locais[0].getInsumo().size(); i++)
  {
    if(locais[0].getInsumo()[i] == insumo)
    {
      cout << "SAO IGUAIS!!" << endl;
    }
  }*/

}