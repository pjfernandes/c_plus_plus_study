#include <iostream>
#include <string>

int main() {

  //printf("Ola mundo\n");
  std::cout << "Olá mundo " << 35 << std::endl;
  int x = 2;
  float pi = 3.14;
  double pi2 = 3.14;
  char a = 'A';
  bool verdadeiro = 1;

  char nome[] = "Pedro";

  std::string novoNome = "Daniel";

  std::cout << "Meu Inteiro: " << x << std::endl;
  std::cout << "Meu Float: " << pi << std::endl;
  std::cout << "Meu Double: " << pi2 << std::endl;
  std::cout << "Meu Char: " << a << std::endl;
  std::cout << "Meu Booleano: " << verdadeiro << std::endl;
  std::cout << "Meu nome: " << nome << std::endl;

  std::cout << "Novo nome: " << novoNome << std::endl;

  std::cout << "Endereço de memoria do novoNome " << &novoNome << std::endl;

  return 0; //retorna 0
}



// soma <- function(x, y) {
//   return(x+y)
// }

// main <- function() {
//   print("OLA")
//   return(3)


// }
