#include "Medicamento.h"

using namespace std;

Medicamento::Medicamento()
{
}

Medicamento::Medicamento(string _nome, int _quantidade, string _valorUnitario, string _dtVencimento, string _nomeFabricante, int _tipoInsumo, int _codLote, string _dosagem, string _administracao, string _disponibilizacao) : Insumos(_nome, _quantidade, _valorUnitario, _dtVencimento, _nomeFabricante, _tipoInsumo, _codLote)
{
	dosagem = _dosagem;
	administracao = _administracao;
	disponibilizacao = _disponibilizacao;
}

Medicamento::~Medicamento()
{
}


void Medicamento::getCamposEspecificos()
{
  cout << "DOSAGEM: " << dosagem << endl;
  cout << "ADMINISTRAÇÃO: "  << administracao << endl;
  cout << "DISPONIBILIZAÇÃO: "  << disponibilizacao << endl;
  cout << "=====================================================" << endl;
}

//sets
void Medicamento::setDosagem(string _dosagem)
{
  dosagem = _dosagem;
}

void Medicamento::setAdministracao(string _administracao)
{
  administracao = _administracao;
}

void Medicamento::setDisponibilizacao(string _disponibilizacao)
{
  disponibilizacao = _disponibilizacao;
}

//gets
string Medicamento::getDosagem()
{
  return dosagem;
}

string Medicamento::getAdministracao()
{
  return administracao;
}

string Medicamento::getDisponibilizacao()
{
  return disponibilizacao;
}