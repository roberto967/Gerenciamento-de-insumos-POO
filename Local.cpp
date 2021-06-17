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

void Local::pushInsumo(shared_ptr<Insumos> _insumo)
{
  Insumo.emplace_back(make_shared<Insumos>(*_insumo));
  //Insumo.emplace_back(_insumo);
}

vector<shared_ptr<Insumos>> Local::getInsumo()
{ 
  return Insumo;
}

void Local::deleteInsumo(int index)
{
  Insumo.erase(Insumo.begin() + index);
}