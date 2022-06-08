#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s{"Hello world"};
  string result = s.substr(2, 3);
  cout << result;

  return 0;
}