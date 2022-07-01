#include <iostream>

int main()
{

    int soma = 0;
    for (int i = 0; i <= 100; i++) 
    /* 
    podemos usar o for para repetir um trecho de código um número de vezes definida.
    O exmeplo acima mostra a estrutura e com ele temos uma varíavel i que define quando
    o for começa e a condição que ele vai ter que atender para o looping terminar. 
    No caso, estamos somando todos os números de 0 a 100 nesse for. 
    */
    {
        soma += i; // soma é igual a ela mesma + i
        /* 
        Como a variável começa com 0 e vai somando i que aumenta em i a cada repetição do
        código. No final teremos a soma dos 100 primeiros números inteiros
        */ 
    }

    std::cout << soma << std::endl; //5050, endl pula linha

    bool x = 1; //verdadeiro

    int i = 0;

    while (x) 
    /*
    O while serve para definir que determiando trecho de código vai se repetir de maneira indefinida
    */
    {
        i++;
        if (i % 5 == 0) //aqui usamos o módulo de 5 (ou seja, se i for divisível por 5, x recebe false e o looping para)
        {
            x = false;
        }
    }

    std::cout << x<< std::endl;

    return 0;
}