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
    static void exibeMenuConsultaEstoqueUFs(int tcon);
    static void exibeOpcoesLocais();

    static void exibeMenuPrincipal();
    static void exibeMenuCadastro();
    static void exibeMenuConsulta();
    static void exibeMenuConsultaEstoque();
    static void exibeMenuTipoConsultaEstoqueUFs();

    static void exibeRodape();
    static void exibeMenuDistribuicao();
    void exibeMenu2();
};

#endif