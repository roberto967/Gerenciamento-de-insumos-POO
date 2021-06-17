#ifndef VACINA_H
#define VACINA_H

#include "Insumos.h"

class Vacina : public Insumos
{
  private:
    std::string tipo;
    int quantDoses;
    std::string intervalo;
  public:
    Vacina();
    Vacina(std::string _nome, int _quantidade, std::string _valorUnitario, std::string _dtVencimento, std::string _nomeFabricante, int _tipoInsumo, int _codLote, std::string _tipo, int _quantDoses, std::string _intervalo);
    ~Vacina();

    //metodo cadastro e exibição sobrescrito(campos especificos)
    void getCamposEspecificos();

    //sets
    void setTipo(std::string _tipo);
    void setQuantDoses(int _quantDoses);
    void setIntervalo(int _intervalo);
    //gets
    std::string getTipo();
    int getQuantDoses();
    std::string getIntervalo();
};

#endif