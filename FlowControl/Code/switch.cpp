#include <iostream>

using namespace std;

int main()
{
  enum state
  {
    loading,
    error
  };
  state a = loading;
  switch (a)
  {
  case loading:
  {
    cout << "In 1";
    cout << "In 1";
    cout << "In 1";
    break;
  }
  case 1 + 1:
    cout << "In 2";
    break;
  default:
    break;
  }
}