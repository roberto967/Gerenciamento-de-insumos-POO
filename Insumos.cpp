#include "Insumos.h"

using namespace std;

Insumos::Insumos()
{
}

//construtor para evitar a repetição de codigo.
Insumos::Insumos(string _nome, int _quantidade, string _valorUnitario, string _dtVencimento, string _nomeFabricante, int _tipoInsumo)
{
  nome = _nome;
  quantidade = _quantidade;
  valorUnitario = _valorUnitario;
  dtVencimento = _dtVencimento;
  nomeFabricante = _nomeFabricante;
  tipoInsumo = _tipoInsumo;
}

Insumos::~Insumos()
{
}

//Metodo de cadastro para ser sobrescrito
void Insumos::cadastroInsumo(){}


void Insumos::getCamposEspecificos(){};

//sets
void Insumos::setNome(string _nome)
{
  nome = _nome;
}

void Insumos::setQuantidade(int _quantidade)
{
  quantidade = _quantidade;
}

void Insumos::setValorUnitario(string _valorUnitario)
{
  valorUnitario = _valorUnitario;
}

void Insumos::setDtVencimento(string _dtVencimento)
{
  dtVencimento = _dtVencimento;
}

void Insumos::setNomeFabricante(string _nomeFabricante)
{
  nomeFabricante = _nomeFabricante;
}

void Insumos::setTipoInsumo(int _tipoInsumo)
{
  tipoInsumo = _tipoInsumo;
}

//gets
string Insumos::getNome()
{
  return nome;
}

int Insumos::getQuantidade()
{
  return quantidade;
}

string Insumos::getValorUnitario()
{
  return valorUnitario;
}

string Insumos::getDtVencimento()
{
  return dtVencimento;
}

string Insumos::getNomeFabricante()
{
  return nomeFabricante;
} 

int Insumos::getTipoInsumo()
{
  return tipoInsumo;
}