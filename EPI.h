#ifndef EPI_H
#define EPI_H

#include "Insumos.h"

class EPI : public Insumos
{
  private:
    std::string tipo;
    std::string descricao;
  public:
    EPI();
    EPI(std::string _nome, int _quantidade, std::string _valorUnitario, std::string _dtVencimento, std::string _nomeFabricante, int _tipoInsumo, int codLote, std::string _descricao, std::string _tipo);
    ~EPI();

    //metodo cadastro e exibição sobrescrito(campos especificos) 
    void getCamposEspecificos();

    //sets
    void setTipo(std::string _tipo);
    void setDescricao(std::string _descricao);
    //gets
    std::string getTipo();
    std::string getDescricao();
};
#endif