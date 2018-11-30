#include <fstream>
#include <iostream>
#include <vector>

#include "../Repositorio.h"
#include "Usuario.h"

template<class Usuario>
Repositorio<Usuario>::Repositorio() {

}
/*
template<class Usuario>
void Repositorio<Usuario>::carregarDados(Usuario* entidade){
    std::string nomeDoArquivo = "data/" + entidade->getNomeDoArquivo();
    std::ifstream entrada(nomeDoArquivo);
    std::string linha;
    while (std::getline(std::cin, linha)) {
        if (entrada.eof())
            break;
        this->lista.push_back(linha);
    }
    
    Repositorio<Usuario>::proximoId = lista.at(lista.size()-1).getId();
    
    entrada.close();
}

template<class Usuario>
Usuario* Repositorio<Usuario>::get(int id){
    for(Usuario* entidade: this->lista){
        if(entidade->getId() == id){
            return entidade;
        }
    }
    return NULL;
}

template<class Usuario>
std::vector<Usuario*, entidade_comparator> Repositorio<Usuario>::getLista(){
    return this->lista;
}

template<class Usuario>
void Repositorio<Usuario>::salvar(Usuario* entidade){
    std::ofstream saida(("data/" << entidade->getNomeDoArquivo()));
    std::string linha;
    for(int i = 0; i < this->lista; i++){
        Usuario entidade = this->lista.at(i);
        linha = entidade.gerarLinhaDeDados();
        saida << linha;
    }
    saida.close();
}

//template<class Usuario>
//void Repositorio<Usuario>::salvar(Usuario* entidade){
//    std::ofstream saida(("data/" << entidade->getNomeDoArquivo()));
//    std::string linha;
//    for(int i = 0; i < this->lista; i++){
//        Usuario entidade = this->lista.at(i);
//        linha = entidade->gerarLinhaDeDados();
//        saida->write(linha);
//    }
//    saida.close();
//}
template<class Usuario>
int Repositorio<Usuario>::getProximoId(){
    return ++Repositorio<Usuario>::proximoId;
}
 */


