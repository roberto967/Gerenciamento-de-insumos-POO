#ifndef INSUMOS_H
#define INSUMOS_H

#include <iostream>
#include <string>
#include <memory>
#include <fstream>
class Insumos
{
  private:
  
  protected:
    std::string nome;
    int quantidade;
    std::string valorUnitario;
    std::string dtVencimento;
    std::string nomeFabricante;
    int tipoInsumo;
    int codLote;        
  public:
    Insumos();
    Insumos(std::string _nome, int _quantidade, std::string _valorUnitario, std::string _dtVencimento, std::string _nomeFabricante, int _tipoInsumo, int _codLote);
    ~Insumos();

    virtual void getCamposEspecificos();  //retorna os campoes especifios de forma pronta para exibir na tela para o usuario.

    //sets
    void setNome(std::string _nome);
    void setQuantidade(int _quantidade);
    void setValorUnitario(std::string _valorUnitario);
    void setDtVencimento(std::string _dtVencimento);
    void setNomeFabricante(std::string _nomeFabricante);
    void setTipoInsumo(int _tipoInsumo);
    //gets
    std::string getNome();
    int getQuantidade();
    std::string getValorUnitario();
    std::string getDtVencimento();
    std::string getNomeFabricante();
    int getTipoInsumo();
    int getCodLote();
};

#endif