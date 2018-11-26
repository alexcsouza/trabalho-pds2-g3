#ifndef ENTIDADE_H
#define ENTIDADE_H

class Entidade{
private:
    int id;
public:
    Entidade(int id) :
    id(id) {
    }

    int getId() const {
        return id;
    }
    
    virtual std::string getNomeDoArquivo() = 0;
    virtual std::string gerarLinhaDeDados() = 0;
   
};

#endif /* ENTIDADE_H */

