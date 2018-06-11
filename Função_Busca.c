#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portuguese");

    // função de busca imagine um vetor 5, 4, 3, 10, 9, 2
    // melhor caso v é 5

        int busca(int v, int *vetor) {
            for (int i = 0; i< TAM; i++) {
                if (vetor[i] == v) {
                    return 1;
                }
            } return 0;
        }
    //é melhor analisar o custo computacional pelo pior caso

    // exercicio

    // 1 escreva um algoritimo que receba uma matriz A e obtenha sua transposta

    // escreva um algoritimo que receba o vetor de dados x n-dimensional e retorne o resultado da seguinte função:

    //ob: calcule a complexidade assintotica dos algoritimos dos problemas acima

    // obs:  usar laços de repetição e comandos de decisão, além de operações aritiméticas fundamentais (suponha que a linguagem não possui a função para potenciação.

    return 0;
}
