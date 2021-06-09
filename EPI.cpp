#include "EPI.h"

using namespace std;

EPI::EPI()
{
}

EPI::EPI(string _nome, int _quantidade, string _valorUnitario, string _dtVencimento, string _nomeFabricante, int _tipoInsumo) : Insumos(_nome, _quantidade, _valorUnitario, _dtVencimento, _nomeFabricante, _tipoInsumo)
{
}

EPI::~EPI()
{
}

//metodo cadastro e exibição sobrescrito(campos especificos)
void EPI::cadastroInsumo()
{
  cout << "TIPO: ";
  getline(cin, tipo);

  cout << "DESCRIÇÃO: ";
  getline(cin, descricao);
}

void EPI::getCamposEspecificos()
{
  cout << "TIPO: " << tipo << endl;
  cout << "DESCRIÇÃO: " << descricao << endl;
  cout << "=====================================================" << endl;
}

//sets
void EPI::setTipo(string _tipo)
{
  tipo = _tipo;
}

void EPI::setDescricao(string _descricao)
{
  descricao = _descricao;
}

//gets
string EPI::getTipo()
{
  return tipo;
}

string EPI::getDescricao()
{
  return descricao;
}
