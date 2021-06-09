size = (*MS).vacina.size();
            //verifica se há insumos do tipo cadastrados no estoque da MS
            if(size == 0){
                cout << "Não há vacinas no estoque!" << endl;
                break;
            }
            // vai mostrar as insumos do tipo disponiveis com o numero de opcao pra o usuario escolher qual transferir
            insumosDisponiveisSemDescricao((*MS), 1);
            
            //verifica se o insumo que o usuario passou está na lista
            do{
                cout << "  Insira qual vacina deseja transferir: " << endl;
                cin >> opcao;
                system("clear");

                if(opcao > (*MS).vacina.size() || opcao > (*MS).vacina.size()){
                    cout << "Opção inválida, tente novamente." << endl;
                }

            }while(opcao > (*MS).vacina.size() || opcao > (*MS).vacina.size());

            opcao-=1;

            quantidadeAtual = (*MS).vacina[opcao].qtdIten;
            cout << "=====================================================" << endl;
            cout << "  Quantidade disponível para transferir: " << quantidadeAtual << endl;
            //esse do while seve para verificar se quantidade escolhido pelo usuario é valida
            do{
                cout << "  -> Insira o quanto você quer transferir: " << endl;
                
                cin >> quantidadeTransferir;

                system("clear");

                if(quantidadeTransferir > quantidadeAtual || quantidadeTransferir < 0){
                    cout << "Opção inválida, tente novamente." << endl;
                }

            }while(quantidadeTransferir > quantidadeAtual || quantidadeTransferir < 0);
            
            //esse if serve pra quando o array do estado ainda estiver vazio,
            //se ele ainda estiver vazio ele aloca o insumo com a quantidade de itens passada pelo usuario
            if((*estado).vacina.size() == 0){    
                (*estado).vacina.push_back((*MS).vacina[opcao]);
                //configura a quantida para a quantidade que o usuario trasnferiu
                size = (*estado).vacina.size();
                (*estado).vacina[size-1].qtdIten = quantidadeTransferir;
                (*estado).vacina[size-1].codigo = codigoUF;
            }else{
                //verifica se já exite produto daquele lote no array
                for(int a = 0; a < (*estado).vacina.size(); a++){
                    //caso exista esse if faz a soma da quantidade existente com a quantidade passada pelo usuario
                    if( (*estado).vacina[a].codigoL == (*MS).vacina[opcao].codigoL && (*estado).vacina[a].codigo == codigoUF ){
                        (*estado).vacina[a].qtdIten += quantidadeTransferir;
                        break;
                    }
                    //caso nao exista aloca mais um espaço no array para cadastrar aquele insumo no estado X.
                    else if(a == (*estado).vacina.size()-1 && (*estado).vacina[a].codigo){
                        (*estado).vacina.push_back((*MS).vacina[opcao]);
                        //configura a quantida para a quantidade que o usuario trasnferiu
                        size = (*estado).vacina.size();
                        (*estado).vacina[size-1].qtdIten = quantidadeTransferir;
                        (*estado).vacina[size-1].codigo = codigoUF;
                        break;
                    }
                }
            }

            //subtrai a quantidade do estoque da MS e caso a quantidade seja 0 ele apaga o insumo do array
            (*MS).vacina[opcao].qtdIten-=quantidadeTransferir;
            if((*MS).vacina[opcao].qtdIten == 0){
                (*MS).vacina.erase((*MS).vacina.begin() + opcao);
            }

            break;
            //faz a transferencia dos medicamentos