#include <fstream>
#include <iostream>
#include <vector>

#include "Repositorio.h"
#include "Entidade.h"

template<class Entidade>
Repositorio<Entidade>::Repositorio() {

}

template<class Entidade>
void Repositorio<Entidade>::carregarDados(Entidade* entidade){
    std::string nomeDoArquivo = "data/" + entidade->getNomeDoArquivo();
    std::ifstream entrada(nomeDoArquivo);
    std::string linha;
    while (std::getline(std::cin, linha)) {
        if (entrada.eof())
            break;
        this->lista.push_back(linha);
    }
    
    Repositorio<Entidade>::proximoId = lista.at(lista.size()-1).getId();
    
    entrada.close();
}

template<class Entidade>
Entidade* Repositorio<Entidade>::get(int id){
    for(Entidade* entidade: this->lista){
        if(entidade->getId() == id){
            return entidade;
        }
    }
    return NULL;
}

template<class Entidade>
std::vector<Entidade*, entidade_comparator> Repositorio<Entidade>::getLista(){
    return this->lista;
}

template<class Entidade>
void Repositorio<Entidade>::salvar(Entidade* entidade){
    std::ofstream saida(("data/" << entidade->getNomeDoArquivo()));
    std::string linha;
    for(int i = 0; i < this->lista; i++){
        Entidade entidade = this->lista.at(i);
        linha = entidade.gerarLinhaDeDados();
        saida << linha;
    }
    saida.close();
}

//template<class Entidade>
//void Repositorio<Entidade>::salvar(Entidade* entidade){
//    std::ofstream saida(("data/" << entidade->getNomeDoArquivo()));
//    std::string linha;
//    for(int i = 0; i < this->lista; i++){
//        Entidade entidade = this->lista.at(i);
//        linha = entidade->gerarLinhaDeDados();
//        saida->write(linha);
//    }
//    saida.close();
//}

int Repositorio<Entidade>::getProximoId(){
    return ++Repositorio<Entidade>::proximoId;
}




