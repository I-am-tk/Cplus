#include <iostream>

using namespace std;

void a(auto i)
{
  i();
}

int main()
{
  auto l = []()
  {
    cout << "I am a lambda function";
  };
  a(l);
  return 0;
}