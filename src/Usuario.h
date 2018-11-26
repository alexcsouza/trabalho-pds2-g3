#ifndef USUARIO_H
#define USUARIO_H

class Usuario : Entidade{
private:
    std::string login;
    std::string senha;
public:
    Usuario(int id, std::string login, std::string senha) :
    Entidade(id), login(login), senha(senha) {
    }

    std::string getLogin() const {
        return login;
    }

    std::string getSenha() const {
        return senha;
    }
    
     std::string getNomeDoArquivo() override{
        return "usuarios.csv";
    };

};

#endif /* USUARIO_H */

