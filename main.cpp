#include <iostream>
#include <memory>
#include "Shape.hpp"
#include <vector>

class SomeInts {
public:
  SomeInts(std::initializer_list<std::shared_ptr<int>> ilist) {
    std::vector<std::shared_ptr<int>> v(ilist.begin(), ilist.end());

    for(auto i:v)
      std::cout << *i << " ";
    std::cout << "\n";
  }
};

int main() {
  auto a = std::make_shared<int>(3);
  auto b = std::make_shared<int>(4);
  auto c = std::make_shared<int>(5);

  SomeInts foo({a,b,c,c,b,a});


      //  std::shared_ptr<Shape> bPtr = std::make_shared<Circle>(2);
//
//  auto cPtr = makeCircle(2);

  return 0;
}
