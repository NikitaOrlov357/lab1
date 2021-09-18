#include "iostream"
#include <fstream>
#include "header.hpp"
#include "Student.hpp"

int main(int argc, char** argv)
{
  nlohmann::json data = getJSON(argc, argv);
  vector<Student> students = parseJSON(data);
  print(students, std::cout);
  return 0;
}