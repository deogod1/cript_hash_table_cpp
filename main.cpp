#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "Hashing.h"

using namespace std;

int main()
{

    Hashing hashingTable(100);
    int opcao=0,opaux=0;

    cout << "Bem Vindo" << endl;
    cout << "Menu:" << endl;
    cout << "1 - Metodo Lista" << endl;
    cout << "2 - Metodo Vetor Prox Casa" << endl;
    cout << "3 - Metodo Salto" << endl;
    cout << "4 - Sair" << endl;
    cout << "Digite a opcao: " << endl;
    cin >> opaux;
    switch(opaux)
    {
    case 1:
            cout << "1 - Adicionar Elemento" << endl;
            cout << "2 - Buscar Elemento" << endl;
            cout << "3 - Remover Elemento" << endl;
            cout << "4 - Sair" << endl;
        do
        {

            cout << "Digite a opcao: " << endl;
            cin >> opcao;
            int aux = 0;
            int pos = 0;

            switch(opcao)
            {
            case 1:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>=0){
                if(hashingTable.add1(aux))
                {
                    std::cout << "Valor adicionado" << std::endl;
                }
                else
                {
                    std::cout << "Valor nao adicionado!" << std::endl;
                }
                }
                else
                    std::cout << "Apenas Valores Positivos!" << std::endl;
                break;
            case 2:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>=0){
                if(hashingTable.buscar1(aux, pos))
                {
                    std::cout << "Valor encontrado na posicao: " << pos << std::endl;
                }
                else
                {
                    std::cout << "Valor nao encontrado!" << std::endl;
                }
                }
                else
                    std::cout << "Apenas Valores Positivos!" << std::endl;
                break;
            case 3:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>=0){
                if(hashingTable.remover1(aux, pos))
                {
                    std::cout << "Valor removido na posicao: " << pos << std::endl;
                }
                else
                {
                    std::cout << "Valor nao removido!" << std::endl;
                }
                }
                else
                    std::cout << "Apenas Valores Positivos!" << std::endl;
                break;
            default:
                break;
            }

            aux = 0;
            pos = 0;
        }
        while(opcao != 4);
        break;

    case 2:
            cout << "1 - Adicionar Elemento" << endl;
            cout << "2 - Buscar Elemento" << endl;
            cout << "3 - Remover Elemento" << endl;
            cout << "4 - Sair" << endl;
        do
        {

            cout << "Digite a opcao: " << endl;
            cin >> opcao;
            int aux = 0;
            int pos = 0;

            switch(opcao)
            {
            case 1:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>=0){
                if(hashingTable.add2(aux))
                {
                    std::cout << "Valor adicionado" << std::endl;
                }
                else
                {
                    std::cout << "Valor nao adicionado!" << std::endl;
                }
                }
                else
                    std::cout << "Apenas Valores Positivos!" << std::endl;
                break;

            case 2:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>=0){
                if(hashingTable.buscar2(aux))
                {
                    std::cout << "Valor encontrado no vetor!" << std::endl;
                }
                else
                {
                    std::cout << "Valor nao encontrado no vetor!" << std::endl;
                }
                }
                else
                    std::cout << "Apenas Valores Positivos!" << std::endl;
                break;
            case 3:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>0){
                if(hashingTable.remover2(aux))
                {
                    std::cout << "Valor removido do vetor" << std::endl;
                }
                else
                {
                    std::cout << "Valor nao removido do vetor!" << std::endl;
                }
                }
                else
                std::cout << "Apenas Valores Positivos!" << std::endl;
                break;
            default:
                break;
            }

            aux = 0;
        }

        while(opcao != 4);
        break;
    case 3:
            cout << "1 - Adicionar Elemento" << endl;
            cout << "2 - Buscar Elemento" << endl;
            cout << "3 - Remover Elemento" << endl;
            cout << "4 - Sair" << endl;
        do
        {

            cout << "Digite a opcao: " << endl;
            cin >> opcao;
            int aux = 0;
            int pos = 0;

            switch(opcao)
            {
            case 1:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>=0){
                if(hashingTable.add3(aux))
                {
                    std::cout << "Valor adicionado" << std::endl;
                }
                else
                {
                    std::cout << "Valor nao adicionado!" << std::endl;
                }
                }
                else
                std::cout << "Apenas Valores Positivos!" << std::endl;
                break;

            case 2:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>=0){
                if(hashingTable.buscar3(aux))
                {
                    std::cout << "Valor encontrado no vetor!" << std::endl;
                }
                else
                {
                    std::cout << "Valor nao encontrado no vetor!" << std::endl;
                }
                }
                else
                    std::cout << "Apenas Valores Positivos!" << std::endl;
                break;
            case 3:
                std::cout << "Digite o valor: " << std::endl;
                std::cin >> aux;
                if(aux>=0){
                if(hashingTable.remover3(aux))
                {
                    std::cout << "Valor removido do vetor" << std::endl;
                }
                else
                {
                    std::cout << "Valor nao removido do vetor!" << std::endl;
                }
                }
                else
                    std::cout << "Apenas Valores Positivos!" << std::endl;
                break;
            default:
                break;
            }

            aux = 0;
        }
        while(opcao != 4);
        break;

    }

    return 0;
}
