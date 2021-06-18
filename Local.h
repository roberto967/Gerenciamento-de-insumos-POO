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

    //sets
    void setNome(std::string _nome);
    void setTipo(int _tipo);
    void setNomeAndTipo(std::string _nome, int _tipo);
    std::vector<std::shared_ptr<Insumos>> getInsumo();

    //gets
    std::string getNome();
    int getTipo();
    
    void pushInsumo(std::shared_ptr<Insumos> _insumo); // empurra no vetor Insumo o insumo recebido como parametro;

    void deleteInsumo(int index);// deleta o insumo armazenado na posição recebida como parametro no vetor Insumo
};

#endif