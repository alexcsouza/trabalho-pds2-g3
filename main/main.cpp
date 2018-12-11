#include <iostream>
#include <string>
#include <locale>
#include "cad_residuos.h"
#include "cad_usr.h"
#include "residuos.cpp"
#include "cad_usr.cpp"
#include "acessoria.cpp"



using namespace std;


int main()
{
	
    std::setlocale(LC_ALL,"Portuguese_Brazil");
    Cad_residuos r;
    Cad_usr user;
    



    /*
    r.imprime();
    bool c =  r.consulta_residuo(44100);
    cout<<"consulta: "<<c<<endl;*/
    /*string b = user.pega_id();
    cout<<"numero cpf/cnpj: "<<b<<endl;
    string n = user.pega_nome();
    cout<<"nome: "<<n<<endl;
    ender e = user.pega_endereco();
    cout<<"Estado: "<<e.estado<<endl;
    cout<<"Cidade: "<<e.cidade<<endl;
    cout<<"Bairro: "<<e.bairro<<endl;
    cout<<"Rua/Avenida: "<<e.rua_av<<endl;
    cout<<"Número da rua/av: "<<e.num<<endl;
    cout<<"Número do telefone: "<<user.pega_contato()<<endl;
    ender e2,e3;
    e2.estado="SP";
    e2.cidade="paulinea";
    e2.bairro="anhanguera";
    e2.rua_av="dos pampas";
    e2.num=1250;
    user.adiciona_local(e2);
    e3.estado="pb";
    e3.cidade="sertoes";
    e3.bairro="sto domingos";
    e3.rua_av="maranguape";
    e3.num=34;
    user.adiciona_local(e3);
    user.imprime_locais();
    bool b = user.acha_local("MG","BH","SAVASSI");
    if(b)
        cout<<"local encontrado!"<<endl;
    else
        cout<<"local inexistente."<<endl;
*/


    return 0;
}





   