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
  Base d1;

  D1 *b = dynamic_cast<D1 *>(&d1);

  if (b)
  {
    puts("Not NuLL");
  }
  else
    puts("NULL");

  return 0;
}