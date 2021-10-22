#include <iostream> // std::cout, std::fixed
#include <iomanip>  // std::setprecision

class Base
{
public:
  virtual ~Base() {}
};

class D1 : public Base
{
};

class D2 : public Base
{
};

int main()
{
  float f;
  f = 4.3;
  printf("%f\n", 4222222.255);

  return 0;
}