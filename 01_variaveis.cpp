#include <iostream> //importando alguns métodos como std::cout (printando na tela) e std::cin (entrada de dados)

/*
Também podemos diminuir um pouco o tamanho daquela função std::cout usando 
"namespace std;" logo embaixo do include (sem aspas). 

Com isso, a função std::cout poderia ser chamada apenas usando cout << "O que você quiser escrever aqui";
*/

// esse é um comentário e é usado para se comunicar com outras pessoas que forem ler o seu código.
int main()
{

  // Antes de sair alterando as coisas. Executa ele

  //variáveis
  int i = 0;      //número inteiro
  double d = 1.8; // números com pontos flutuantes - alocam 8 bytes na memória
  float f = 1.45; // números com pontos flutuantes - alocan 4 bytes na memória
  char letra = 'a';
  char name[] = "Gabriel";
  bool verdadeiro = true; //booleano -> verdadeiro ou falso

  /* 
  Por questões de o c é uma linguagem que muda de compilador para compilador
  Decidi colocar essa variável como char name[]. Em outras linguagens multiplos 
  Char na mesma variável são chamados de strings (é um tipo primitivo também).
  
  Vale ressaltar que o [] indica que a variável é um array ou vetor. Que é quando 
  reservamos várias "gavetas" de uma vez só e colocamos os valores em uma só variável. 

  Então, na expressão, estamos usando uma array de char.

  Arrays também podem ser montados com qualquer outro tipo primitivo.

  Assim, ficaria:
  
  int numeros[4] = [1, 2, 3, 4];

  precisamos declarar o tamanho do array quando usado (não aplicável ao char)

  e para acessar os valor do array só precisamos usar o índice;

  Como: 

    numeros[0] que é 1 (todos os arrays iniciam no índice 0 e vão até n-1, no caso 3) 



  disclaimer: Um array dentro de outro array forma uma matriz

  */

  std::string nome;
  std::cout << "Digite o seu nome:" << std::endl; 
  /*
  endl ou end line serve para pular linha no final, meio ou início da


  */
  std::cin >> nome;
  std::cout << "Oi, " << nome << "!!!";

  //std::cout << i;

  return 0;
}