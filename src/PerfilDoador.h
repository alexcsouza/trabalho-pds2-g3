#ifndef PERFILDOADOR_H
#define PERFILDOADOR_H

#include <vector>

class Pessoa;

class PerfilDoador : Entidade{
private:
    Pessoa* pessoa;
    std::vector<std::string> residuosDeInteresse;
public:
    PerfilDoador(Pessoa pessoa) :
    pessoa(pessoa) {
    }
    
    virtual void visualizarDoacoes() = 0;
    virtual void agendarColeta() = 0;
    virtual void registrarColeta() = 0;
    
    virtual void configurarResiduosDeInteresse() = 0;
    virtual void adicionarResiduoDeInteresse() = 0;
    virtual void removerResiduoDeInteresse() = 0;
    
     std::string getNomeDoArquivo() override{
        return "perfis-doadores.csv";
    };
};

#endif /* PERFILDOADOR_H */

