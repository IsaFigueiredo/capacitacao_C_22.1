#include <iostream>

//Operadores lógicos
int main()
{
    // declaração de variáveis
    int a = 0;
    char b = 1;

    bool c = a == b; //igualdade -> falso, já que b é diferente de a
    c = a != b;      //não igualdade -> verdadeiro, já que a é igual a b

    /*

    Também temos operadores como o || (ou) e o && onde, 
    seguindo a lógica, uma expressão ou outra precisam ser verdadeira 
    e um expressão e outra precisam ser verdadeiras.

    então em: 

    c = a || b  
    
    c seria verdadeiro pois b é verdadeiro

    porém, em 
    
    c = a && b

    c seria falso já que a é falso 

    */

    std::cout << c; // c será 1 ou true
}