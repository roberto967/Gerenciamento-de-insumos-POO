#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include "Insumos.h"

class Medicamento : public Insumos
{
  private:
    std::string dosagem;
    std::string administracao;
    std::string disponibilizacao;
  public:
    Medicamento();
    Medicamento(std::string _nome, int _quantidade, std:: string _valorUnitario, std::string _dtVencimento, std::string _nomeFabricante, int _tipoInsumo, int _codLote, std::string _dosagem, std::string _administracao, std::string _disponibilizacao);
    ~Medicamento();
    
    //metodo cadastro e exibição sobrescrito(campos especificos)
    void getCamposEspecificos();

    //sets
    void setDosagem(std::string _dosagem);
    void setAdministracao(std::string _administracao);
    void setDisponibilizacao(std::string _disponibilizacao);
    //gets
    std::string getDosagem();
    std::string getAdministracao();
    std::string getDisponibilizacao();
};

#endif