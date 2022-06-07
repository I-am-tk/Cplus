#include <iostream>
#include <string>
int main()
{
  std::string full_name;
  std::getline(std::cin, full_name);
  std::cout << full_name << std::endl;
  std::cerr << "This is an error" << std::endl;
  std::clog << "This is a log message" << std::endl;
  return 0;
}

// input:  [SPACE][ENTER][TIKESWAR NAIK]
// output: TIKESWAR
// A space in cin is assumed that the value has been entered and whatever is typed after the space is going to be for the next variable.s

// solve the problem with getline(input_stream, variable)
// But it introduces another problem, Enter should not be pressed and it preserves the spaces