#ifndef CAD_USR_H_INCLUDED
#define CAD_USR_H_INCLUDED
#include <set>
#include <vector>
#include <map>
#include <string>

typedef struct ender{
    std::string estado;
    std::string cidade;
    std::string bairro;
    std::string rua_av;
    int num;
    }ender;

class Cad_usr
{
    private:
        bool pj;    //Indica se é pessoa jurídica.
        std::string cad_receita;    //C.P.F. ou C.N.P.J. da pessoa.
        std::string nome;
        ender endereco;  //Estado,cidade,bairro,logradouro e número, nesta ordem.
        std::string contato;
        std::vector<int>tipos_residuo;
        std::vector<ender>locais_coleta;/*Um "vector" de endereços onde o doador/receptor
        aceita doar/receber o material*/
	bool perfil; //Indica o perfil de usuario 0 para doador 1 para receptor
	int material; //Indica o material de interesse para doar/receber
	std::string senha; //Senha de acesso ao programa
    public:

        Cad_usr();
	~Cad_usr();
	get();
        bool pega_tp_pessoa();
        std::string pega_contato();
        std::string pega_nome();
        std::string pega_id();//CPF OU CNPJ
        ender pega_endereco();
        bool acha_local(std::string,std::string,std::string); //Verifica se o local é de interesse da pessoa
        bool acha_res(int); //Verifica se o resíduo é de interesse para a pessoa
        void adiciona_res(int);
        void adiciona_local(ender);
        void exclui_residuo();
        void exclui_local();
        void imprime_locais();
	std::string pega_senha();
	bool pega_perfil();
	int pega_material();
	
	


};
#endif // CAD_USR_H_INCLUDED
