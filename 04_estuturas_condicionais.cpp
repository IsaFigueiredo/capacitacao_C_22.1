#include <iostream>

// estruturas condicionais
int main()
{

    int i = 0;

    // se a expressão i for verdadeira (não é porque 0 indica sempre falso) faz tal coisa
    if (i)
    { //usando a tradução livre -> se (condição que deve ser atendida) então realiza o código
        std::cout << "é verdadeira" << std::endl;
    }
    else
    { //senão -> executa esse código
        std::cout << "é falsa" << std::endl;
    }
    //vale lembrar que o IF funciona sem o else mas o contrário não é verdade

    int x = 1;
    /*

    o switch compara os valores da variável que foi passada -> se atender as opçoes ele realiza a
    ação que está dentro do bloco de código
    
    */

    switch (x)
    {

    case 1:
        std::cout << "x é igual a 1";
        break; // precismos colocar o break em todas as opções senão o código executa tudo em sequência passando pelo case 2.
    case 2:
        std::cout << "x é igual a 2";
        break;
    }
}