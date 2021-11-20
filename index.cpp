#include <iostream>

class Hello{
    public:
        void helloword(){
            std::cout << "Ola, Mundo!";
        }
};

int main( int argc, char **argv ){
    Hello hello;

    hello.helloword();
    return 0;
}