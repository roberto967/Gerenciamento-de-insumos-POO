#ifndef MENU_H
#define MENU_H

#include "Controler.h"

#include <iostream>

class Menu
{
  private:
    
  public:
    Menu();
    ~Menu();

    static void cabecalhoCadastro(int tipoInsumo);
    static void exibeCabecalhoSimples(int tipoInsumo);

    static void exibeMenuPrincipal();
    static void exibeMenuCadastro();
    static void exibeMenuConsulta();
    static void exibeMenuConsultaEstoque();

    static void exibeRodape();
    static void exibeMenuDistribuicao();
};

#endif