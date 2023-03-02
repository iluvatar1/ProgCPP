#include <iostream>
#include <cmath>

using fptr = double(double);

double f(double x);
double g(double x);
double deriv(fptr fun, double x, double h);

int main(int argc , char **argv)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);

  double x{2.3}, h{0.001};

  std::cout << deriv(f, x, h) << "\n";
  std::cout << deriv(g, x, h) << "\n";
  //std::cout << 2*std::cos(x) - 1 << "\n";

  return 0;
}

double f(double x)
{
  return 2*std::sin(x) - x;
}

double g(double x)
{
  return std::sin(x)*std::sin(x);
}

double deriv(fptr fun, double x, double h)
{
  return (fun(x+h) - fun(x))/h;
}

