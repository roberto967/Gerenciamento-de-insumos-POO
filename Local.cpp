#include "Local.h"

using namespace std;

Local::Local()
{
}

Local::~Local()
{
}

void Local::setNome(std::string _nome)
{
  nome = _nome;
}

void Local::setTipo(int _tipo)
{
  tipo = _tipo;
}

void Local::setNomeAndTipo(std::string _nome, int _tipo)
{
  Local::setNome(_nome);
  Local::setTipo(_tipo);
}

string Local::getNome()
{
  return nome;
}

int Local::getTipo()
{
  return tipo;
}

void Local::pushInsumo(string _nome, int _quantidade, string _valorUnitario, string _dtVencimento, string _nomeFabricante, int _tipoInsumo)
{ 
  switch (_tipoInsumo)
  {
    case 1:
      Insumo.emplace_back(new Vacina(_nome, _quantidade, _valorUnitario, _dtVencimento, _nomeFabricante, _tipoInsumo));
      break;
    case 2:
      Insumo.emplace_back(new Medicamento(_nome, _quantidade, _valorUnitario, _dtVencimento, _nomeFabricante, _tipoInsumo));
    break;
    case 3:
      Insumo.emplace_back(new EPI(_nome, _quantidade, _valorUnitario, _dtVencimento, _nomeFabricante, _tipoInsumo));
    break;
    default:
      break;
  }
  Insumo[Insumo.size()-1]->cadastroInsumo();
}

vector<shared_ptr<Insumos>> Local::getInsumo()
{ 
  return Insumo;
}