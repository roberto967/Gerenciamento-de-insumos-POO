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

    static void cabecalhoCadastro(int tipoInsumo); // cabeçalho que se adapta ao tipo de insumo que vai ser exibido, para cadastro
    static void exibeCabecalhoSimples(int tipoInsumo); // cabeçalho que se adapta ao tipo de insumo que vai ser exibido, para consulta

    static void exibeMenuPrincipal(); // exibe o menu principal
    static void exibeMenuCadastro();  // exibe as opções de insumos disponiveis para cadastro
    static void exibeMenuConsulta(); // exibe os locais disponiveis para consulta
    static void exibeMenuConsultaEstoque(); // exibe os tipo de consulta de estoque disponiveis

    static void exibeRodape(); // exibe o rodapé
    static void exibeMenuDistribuicao(); // exibe os locais diponiveis para distribuição
};

#endif