#include <iostream>
#include <cmath>

int main()
{
  int x,y;
  std::cout << "Please enter two numbers";
  std::cin >>x >>y;
  std::cout << "The sum of" << x << "and" << y << "is" << x+y << std::endl;
  std::cout << "The difference between" << x << "and" << y << "is" << x-y << std::endl;
  std::cout << "The product of" << x << "and" << y << "is" << x*y << std::endl;
  std::cout << "The distance between" << x << "and" << y << "is" << abs(x-y) << std::endl;
  std::cout << "The mean average of" << x << "and" << y << "is" << ((double)x+y)/2.0 << std::endl;
  return 0;
}
