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
    void cadastraInsumosMS(); // faz o cadastro dos insumos no estoque do ministerio locais[0]
    void consultaInsumos(Local loc); // consulta os insumos disponiveis de forma simples do local recebido como parametro, exibe os insumos organizados por tipo
    void consultaInsumosDescricao(Local loc); // consulta os insumos disponiveis e seus campoes especificos do local recebido como parametro
    std::vector<std::shared_ptr<Insumos>> consultaInsumos(Local loc, int tipoInsumo); // retorna um vetor do tipo passado como parametro do local recebido como parametro, exibe os insumos organizados por tipo
    void distribuirInsumo(int dest, std::shared_ptr<Insumos> insumo); // faz a distribuição dos insumos disponiveis no estoque do ministerio para os estados, recebendo o insumo como parametro um inteiro que é a posição em locais do estado ao qual se deseja enviar o insumo
    Local getLocais(int n); // retorna o local: locais[n]
};
#endif