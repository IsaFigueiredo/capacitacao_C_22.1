#include <iostream>
#include <math.h> //as funções pow e sqrt vêm dessa "bolsa"

// Operadores aritméticos
int main()
{

  int a = 1;
  int b = 2;

  int c = a + b; // c = 1 + 2

  c = a - b; // c = 1 - 2

  c++; //operador de incremento -> soma + 1 ao valor contido na variável
  c--; //opreador de decremento -> subtrai - 1 ao valor contido na variável

  c += 10000;
  c -= 500000;

  float d = a / b;

  /*
  Durante a cap tivemos problemas com essa expressão -> apresar de ser 1/2, os dois valores são inteiros ou seja, 
  Quando dividos retornam somente o dígito antes da vírgula para o valor de d (que no caso seria 0). 
  
  Para corrigir isso precisariamos aplicar a expressão:

  float d = (float) a/b;

  Aí sim o compilador trataria o resultado como um número com vígula 

  A ação de converter um tipo primitivo (int, float, bool, char) em outro é chamado casting

  */

  int i = 4 * 5;

  int p = pow(10, 3); //potenciação -> primeiro número - base -> segundo número - expoente
  float r = sqrt(5);  //função raiz quadrada

  std::cout << r;
}
