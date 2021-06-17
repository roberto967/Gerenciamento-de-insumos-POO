#ifndef CONTROLER_H
#define CONTROLER_H

#include "Local.h"
#include "Menu.h"


class Controler
{
  private:
    Local locais[28];
  public:
    Controler();
    ~Controler();
    void cadastraInsumosMS();
    void consultaInsumos(Local loc);
    void consultaInsumosDescricao(Local loc);
    std::vector<std::shared_ptr<Insumos>> consultaInsumos(Local loc, int tipoInsumo);//não teno certeza se precisa retornar com esse "unique ptr, dps testo no linux qd já tiver rodando"
    void distribuirInsumo(int dest, std::shared_ptr<Insumos> insumo);
    //??
    Local getLocais(int n);
};
#endif