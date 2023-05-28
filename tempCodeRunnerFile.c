        // Exibir informações das arestas
        aresta *arestaAtual = atual->arestas.next;
        printf("Arestas:\n");
        while (arestaAtual != NULL) {
            printf("- Vertice: %s, Distancia: %.2f\n", arestaAtual->vertice, arestaAtual->distancia);
            arestaAtual = arestaAtual->next;
        }
        
        // Exibir informações dos veículos
        veiculo *veiculoAtual = atual->veiculos.next;
        printf("Veiculos:\n");
        while (veiculoAtual != NULL) {
            printf("- ID: %d, Tipo: %s, Bateria: %.2f, Autonomia: %.2f, Custo: %.2f, Localizacao: %s, Estado: %d\n",
                    veiculoAtual->id, veiculoAtual->tipo, veiculoAtual->bateria, veiculoAtual->autonomia,
                    veiculoAtual->custo, veiculoAtual->localizacao, veiculoAtual->estado);
            veiculoAtual = veiculoAtual->next;
        }
        