#include <iostream>
#include <cmath>

float g(float x);
double f(double x);

template <typename T>
double deriv(T fun, double x, double h);

int main(int argc , char **argv)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);

  double x{2.3}, h{0.001};

  std::cout << deriv(f, x, h) << "\n";
  std::cout << deriv(g, x, h) << "\n";

  return 0;
}

double f(double x)
{
  return 2*std::sin(x) - x;
}

float g(float x)
{
  return 2*std::cos(x) - x;
}

template <typename T>
double deriv(T fun, double x, double h)
{
  return (fun(x+h) - fun(x-h))/(2*h);
}

