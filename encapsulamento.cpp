#include <iostream>

class Pessoa{
    public:
        void nome(){
            std::cout << "Wellington" << '\n';
        }
};

class Habilidades : public Pessoa{
    public:
        void idioma(){
            std::cout << "Portugues Brasileiro" << '\n';
        }
};

class Dados : public Habilidades{

};

int main( int argc, char **argv){
    Dados dados;
    std::cout << "O nome dele é:";
    dados.nome();
    std::cout << "A habilidade dele é:";
    dados.idioma();

    return 0;
}