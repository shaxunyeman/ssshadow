#include <iostream>
#include <string>

void log0(const std::string& data) {
  std::cout
    << ": " << data
    << std::endl;
}

void log1(const std::string& data, const std::string& title) {
  std::cout
    << title << ": "
    << data
    << std::endl;
}

int event(const std::string& data) {
  return 0;
}

int revert(const std::string& data) {
  return 1;
}
