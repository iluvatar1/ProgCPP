#include <iostream>


int main(void)
{
  // suma de los divisores de un numero
  const int N1 = 4;
  int suma1 = 0;
  for (int ii = 2; ii < N1; ii++) {
    if (N1 % ii == 0) {
      suma1 += ii;
    }
  }
  std::cout << "suma1 = " << suma1 << std::endl;

  const int N2 = 40;
  int suma2 = 0;
  for (int ii = 2; ii < N2; ii++) {
    if (N2 % ii == 0) {
      suma2 += ii;
    }
  }
  std::cout << "suma2 = " << suma2 << std::endl;


  return 0;
}

