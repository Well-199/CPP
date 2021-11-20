#include <iostream>

class Pessoa{
    private:
        int idade = 27;
    protected:
        double altura = 1.72;

    public:
        void nome(){
            std::cout << "Wellington" << '\n';
        }

        // Retorno do tipo int retorna sómente o 1 inteiro
        // Tipo declarado deve ser o mesmo da variavel
        double display_altura(){
            return altura;
        }

        int display_idade(){
            return idade;
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

    std::cout << "A altura dele é: " << dados.display_altura() << '\n';

    std::cout << "A idade dele é " << dados.display_idade() << '\n';
    return 0;
}