#include "Vacina.h"

using namespace std;

Vacina::Vacina()
{
}

Vacina::Vacina(string _nome, int _quantidade, string _valorUnitario, string _dtVencimento, string _nomeFabricante, int _tipoInsumo) : Insumos(_nome, _quantidade, _valorUnitario, _dtVencimento, _nomeFabricante, _tipoInsumo)
{ 
  quantDoses = 0;
}

Vacina::~Vacina()
{
}

//metodo cadastro e exibição sobrescrito(campos especificos)
void Vacina::cadastroInsumo()
{
  cout << "TIPO: ";
  getline(cin, tipo);

  cout << "QUANT DOSES: ";
  cin >> quantDoses;
  cin.ignore();

  cout << "INTERVALO ENTRE DOSES: ";
  getline(cin, intervalo);
}

void Vacina::getCamposEspecificos()
{
  cout << "TIPO: " << tipo << endl;
  cout << "DOSES: " << quantDoses << endl;
  cout << "INTERVALO: " << intervalo << endl;
  cout << "=====================================================" << endl;
}

//sets
void Vacina::setTipo(string _tipo)
{
  tipo = _tipo;
}

void Vacina::setQuantDoses(int _quantDoses)
{
  quantDoses = _quantDoses;
}

void Vacina::setIntervalo(int _intervalo)
{
  intervalo = _intervalo;
}

//gets
string Vacina::getTipo()
{
  return tipo;
}

int Vacina::getQuantDoses()
{
  return quantDoses;
}

string Vacina::getIntervalo()
{
  return intervalo;
}