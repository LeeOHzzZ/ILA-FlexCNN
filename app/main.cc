// File: main.cc

#include <iostream>

#include <flexcnn/flexcnn.h>

using namespace ilang;

int main() {
  auto m = flexcnn::GetFlexcnnIla("flexcnn");
  std::cout << "Successfully construct " << m << "\n";
  return 0;
}
