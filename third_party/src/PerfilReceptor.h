#ifndef PERFILRECEPTOR_H
#define PERFILRECEPTOR_H

#include <vector>
#include "Agendamento.h"

class Pessoa;

class PerfilReceptor : Entidade{
private:
    Pessoa* pessoa;
    std::vector<std::string> residuosDeInteresse;
public:
    PerfilReceptor(int id, Pessoa* pessoa) :
    Entidade(id), pessoa(pessoa) {
    }
    
    virtual void configurarResiduosDeInteresse() = 0;
    virtual void adicionarResiduoDeInteresse() = 0;
    virtual void removerResiduoDeInteresse() = 0;
    
    virtual void visualizarAgendamentosDisponiveis() = 0;
    virtual void selecionarColeta(Agendamento* agendamento) = 0;
    virtual void registrarRecolhimento() = 0;
    
     std::string getNomeDoArquivo() override{
        return "perfis-receptores.csv";
    };
};

#endif /* PERFILRECEPTOR_H */

