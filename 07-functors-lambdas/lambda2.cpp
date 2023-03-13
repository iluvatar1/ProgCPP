#include <iostream>
#include <cmath>

template <typename T>
double deriv(T fun, double x, double h);

int main(int argc , char **argv)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);

  double x{2.3}, h{0.001};

  // lambda
  double a = 2.8;
  double b = -1.98;
  auto flambda = [&a, b](double x){ return a*std::sin(x) - b*x; };
  std::cout << deriv(flambda, x, h) << "\n";
  a = 3.8;
  std::cout << deriv(flambda, x, h) << "\n";

  auto glambda = [b](double x){ return b*x; };
  std::cout << deriv(glambda, x, h) << "\n";


  return 0;
}

template <typename T>
double deriv(T fun, double x, double h)
{
  return (fun(x+h) - fun(x-h))/(2*h);
}

