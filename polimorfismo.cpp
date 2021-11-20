#include <iostream>

class Pessoa{
    public:
        int num(){
            return 10;
        }

        int num( int num ){
            return num;
        }
};

class Turma : public Pessoa{
    public:
        int num(){
            return 50;
        }

        int num( int num ){
            return num;
        }
};

int main( int argc, char **argv ){
    
    Pessoa pessoa;
    Turma turma;

    std::cout << "num() de Pessoa: " << pessoa.num() << '\n';
    std::cout << "num( int num ) de Pessoa: " << pessoa.num( 256 ) << '\n';
    std::cout << "num() de Turma: " << turma.num() << '\n';
    std::cout << "num(i int num ) de Turma: " << turma.num( 128 ) << '\n';
};