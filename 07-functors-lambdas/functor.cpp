#include <iostream>
#include <cmath>

// functor : una clase que se comprta como una funcion
// tiene sobrecargado el operador ()
// a+b -> a.operator+(b)
// a(b) -> a.operator()(b)

struct Functor {
  double a{0.0}, b{0.0};
  double operator()(double x) {
      return a*std::sin(x) - b*x;
  }
};

double f(double x);

template <typename T>
double deriv(T fun, double x, double h);

int main(int argc , char **argv)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);

  double x{2.3}, h{0.001};

  std::cout << deriv(f, x, h) << "\n";

  Functor fun1;
  fun1.a = 2.8;
  fun1.b = -1.98;
  std::cout << deriv(fun1, x, h) << "\n";
  fun1.a = 3.8;
  std::cout << deriv(fun1, x, h) << "\n";


  return 0;
}

double f(double x)
{
  return std::sin(x) - x;
}

template <typename T>
double deriv(T fun, double x, double h)
{
  return (fun(x+h) - fun(x-h))/(2*h);
}

