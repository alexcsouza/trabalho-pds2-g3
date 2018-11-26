#ifndef PERFILRECOLHEDOR_H
#define PERFILRECOLHEDOR_H

#include <vector>
#include "Agendamento.h"

class Pessoa;

class PerfilRecolhedor : Entidade{
private:
    Pessoa* pessoa;
    std::vector<std::string> residuosDeInteresse;
public:
    PerfilRecolhedor(int id, Pessoa* pessoa) :
    Entidade(id), pessoa(pessoa) {
    }

    virtual void configurarResiduosDeInteresse() = 0;
    virtual void adicionarResiduoDeInteresse() = 0;
    virtual void removerResiduoDeInteresse() = 0;
        
    virtual void visualizarAgendamentosDisponiveis() = 0;
    virtual void selecionarColeta(Agendamento* agendamento) = 0;
    virtual void registrarRecolhimento() = 0;
    
    std::string getNomeDoArquivo() override{
        return "perfis-recolhedores.csv";
    };
};

#endif /* PERFILRECOLHEDOR_H */

