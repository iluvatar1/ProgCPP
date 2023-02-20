#include <iostream>
// tiporetorno nombrefuncion (int param1, double param2)
int sum_divisors(const int & N); // declaracion

int main(void)
{
  // suma de los divisores de un numero
  int N1 = 4;
  std::cout << "suma1 = " << sum_divisors(N1) << std::endl;

  int N2 = 40;
  std::cout << "suma2 = " << sum_divisors(N2) << std::endl;


  return 0;
}

int sum_divisors(const int & N) // definicion
{
  int suma = 0;
  for (int ii = 2; ii < N; ii++) {
    if (N % ii == 0) {
      suma += ii;
    }
  }
  //N = -9;
  return suma;
}
