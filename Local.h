#ifndef LOCAL_H
#define LOCAL_H
#include <fstream>
#include"Insumos.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"
#include <vector>
#include <memory>

class Local
{
  private:
    std::string nome;
    int tipo;
    std::vector<std::shared_ptr<Insumos>> Insumo;
  public:
    Local();
    ~Local();

    void setNome(std::string _nome);
    void setTipo(int _tipo);
    void setNomeAndTipo(std::string _nome, int _tipo);
    std::string getNome();
    int getTipo();
    
    //da o push de um insumo no array
    void pushInsumo(std::shared_ptr<Insumos> _insumo);
    std::vector<std::shared_ptr<Insumos>> getInsumo();
    void deleteInsumo(int index);
};

#endif