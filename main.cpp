#include <iostream>
#include <memory>
#include "Shape.hpp"

int main() {
  std::shared_ptr<Shape> bPtr = std::make_shared<Circle>(2);

  auto cPtr = makeCircle(2);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
