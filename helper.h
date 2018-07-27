#include <iostream>
#include <string>

void log0(const std::string& data) {
  std::cout
    << ": " << data
    << endl;
}

void log1(const std::string& data, const std::string& title) {
  std::cout
    << title << ": "
    << data
    << endl;
}

int event(const std::string& data) {
  return 1;
}

int revert(const std::string& data) {
  return 1;
}
