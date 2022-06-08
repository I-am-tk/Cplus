#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b);

struct Point
{
  int a;
  int b;
};

int main()
{

  return 0;
}

template <typename T>
T maximum(T a, T b)
{
  return a > b ? a : b;
}
