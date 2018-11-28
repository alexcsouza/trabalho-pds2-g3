#ifndef PESSOA_H
#define PESSOA_H

enum TipoDePessoa {FISICA, JURIDICA};

class PerfilDoador;
class PerfilRecolhedor;
class PerfilReceptor;

class Pessoa : Usuario{
private:
    std::string nome;
    TipoDePessoa tipo;
    PerfilDoador* perfilDoador;
    PerfilRecolhedor* perfilRecolhedor;
    PerfilReceptor* perfilReceptor;
    
public:
    Pessoa(int id, std::string login, std::string senha, std::string nome, TipoDePessoa tipo, PerfilDoador* perfilDoador, PerfilRecolhedor* perfilRecolhedor, PerfilReceptor* perfilReceptor) :
    Usuario(id, login, senha), nome(nome), tipo(tipo), perfilDoador(perfilDoador), perfilRecolhedor(perfilRecolhedor), perfilReceptor(perfilReceptor) {
    }
    
   std::string getNomeDoArquivo() override{
        return "pessoas.csv";
    };  
};


#endif /* PESSOA_H */

