#include <iostream>

using namespace std; 
//cout sem ter que escrever std:: no início 
//como foi falado no aquivo 01  

int soma(int a, int b) // declaração da função
/*
funções possuem parãmetros -> são abstrações dos valores/dados que serão usados na lógica da mesma
por conta disso, também precisamos declarar os tipos primitivos dos parâmetros.

funções precisam indicar que tipo de valor vão retornar (int) como podemos ver no return.
*/
{
    int c = a + b;
    return c;
}

/*
Vale lembrar também que na programação temos o escopo -> lugar onde variáveis e funções são válidas.
Então se uma variável é declarada dentro dos {} de um if ou for ela não existe fora deles. 
*/

void multiplicacao(int a, int b) // declaração da função
// funções void não retornam nada
{
    std::cout << a * b;
}

int main()
{

    int a = soma(1, 2) + 3; //chamada da função
    //com funções que possuem retorno podemos reutilzar os resultados no código
    
    cout << a << endl;

    multiplicacao(7, 8); //chamada na função


    return 0; //retorno da função main
}
