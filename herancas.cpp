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

int main( int argc, char **argv){
    Habilidades hab;
    std::cout << "O nome dele é:";
    hab.nome();
    std::cout << "A habilidade dele é:";
    hab.idioma();

    return 0;
}