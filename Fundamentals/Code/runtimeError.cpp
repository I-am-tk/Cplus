#include <iostream>

int main()
{
  // It will cause runtime error
  int value = 7 / 0;
  // The below line is not going to be executed
  std::cout << value;
  return 0;
}