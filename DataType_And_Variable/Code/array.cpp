#include <iostream>

int main()
{
  int items[]{10, 12, 13, 14};
  // This works even for normal array I did not knows
  for (auto value : items)
  {
    std::cout << value << " ";
  }
  return 0;
}